#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
};

struct Node* head = NULL;

// Function to insert node at the beginning
void insertFirst(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->prev = NULL;
    newNode->next = head;
    
    if (head != NULL) {
        head->prev = newNode;
    }
    head = newNode;
    printf("Node inserted at the beginning\n");
}

// Function to insert node at the end
void insertLast(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    
    if (head == NULL) {
        newNode->prev = NULL;
        head = newNode;
    } else {
        struct Node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->prev = temp;
    }
    printf("Node inserted at the end\n");
}

// Function to count the number of nodes
int countNodes() {
    int count = 0;
    struct Node* temp = head;
    while (temp != NULL) {
        count++;
        temp = temp->next;
    }
    return count;
}

// Function to insert node at specified position
void insertMiddle(int data, int pos) {
    if (pos < 1) {
        printf("Invalid position!\n");
        return;
    }
    
    int length = countNodes();
    
    if (pos == 1) {
        insertFirst(data);
    } else if (pos > length) {
        insertLast(data);
    } else {
        struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
        newNode->data = data;
        struct Node* temp = head;
        
        // Traverse to the node just before the desired position
        for (int i = 1; i < pos - 1; i++) {
            temp = temp->next;
        }
        
        newNode->next = temp->next;
        newNode->prev = temp;
        if (temp->next != NULL) {
            temp->next->prev = newNode;
        }
        temp->next = newNode;
        
        printf("Node inserted at position %d\n", pos);
    }
}

// Function to display the list
void display() {
    if (head == NULL) {
        printf("List is empty!\n");
        return;
    }
    
    struct Node* temp = head;
    printf("Doubly Linked List: ");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main() {
    int choice, data, pos;
    
    while (1) {
        printf("\n1. Insert at beginning\n");
        printf("2. Insert at end\n");
        printf("3. Insert at middle position\n");
        printf("4. Display list\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                printf("Enter data to insert: ");
                scanf("%d", &data);
                insertFirst(data);
                break;
                
            case 2:
                printf("Enter data to insert: ");
                scanf("%d", &data);
                insertLast(data);
                break;
                
            case 3:
                printf("Enter data to insert: ");
                scanf("%d", &data);
                printf("Enter position: ");
                scanf("%d", &pos);
                insertMiddle(data, pos);
                break;
                
            case 4:
                display();
                break;
                
            case 5:
                exit(0);
                
            default:
                printf("Invalid choice!\n");
        }
    }
    
    return 0;
}