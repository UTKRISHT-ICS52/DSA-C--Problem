/* 
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

// Function to display the linked list
void display(struct Node* head) {
    struct Node* temp = head;
    printf("Linked List: by Utkrisht Patel\n");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    // Creating nodes manually
    struct Node* head = (struct Node*)malloc(sizeof(struct Node));
    struct Node* second = (struct Node*)malloc(sizeof(struct Node));
    struct Node* third = (struct Node*)malloc(sizeof(struct Node));

    head->data = 42;
    head->next = second;

    second->data = 52;
    second->next = third;

    third->data = 11;
    third->next = NULL;

    // Displaying the list
    display(head);

    return 0;
}
*/