/* 
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* insertAtBeginning(struct Node* head, int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = head; 
    head = newNode;
    return head;
}
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
    struct Node* head = NULL;

    head = insertAtBeginning(head, 11);
    head = insertAtBeginning(head, 52);
    head = insertAtBeginning(head, 42);

    display(head);

    return 0; 
}

*/
