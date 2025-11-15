/* #include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* head = NULL;

// Create new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Insert at end
void insertEnd(int data) {
    struct Node* newNode = createNode(data);

    if (head == NULL) {
        head = newNode;
        return;
    }

    struct Node* temp = head;
    while (temp->next != NULL)
        temp = temp->next;

    temp->next = newNode;
}

// Delete from beginning
void deleteBeginning() {
    if (head == NULL) {
        printf("List is empty!\n");
        return;
    }

    struct Node* temp = head;
    head = head->next;
    free(temp);
}

// Delete from end
void deleteEnd() {
    if (head == NULL) {
        printf("List is empty!\n");
        return;
    }

    // single node
    if (head->next == NULL) {
        free(head);
        head = NULL;
        return;
    }

    struct Node* temp = head;
    while (temp->next->next != NULL)
        temp = temp->next;

    free(temp->next);
    temp->next = NULL;
}

// Delete at specific position
void deletePosition(int pos) {
    if (head == NULL) {
        printf("List isempty!\n");
        return;
    }
    if (pos == 0) {
        deleteBeginning();
        return;
    }
    struct Node* temp = head;
    for (int i = 0; temp != NULL && i < pos - 1
; i++)
        temp = temp->next;
    if (temp == NULL || temp->next == NULL) {
        printf("Position out of bounds!\n");
        return;
    }
    struct Node* next = temp->next->next;

    free(temp->next);
    temp->next = next;
}
// Display list

void display() {
    struct Node* temp = head;
    printf("Linked List: by Utkrisht Patel\n");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}
int main() {
    insertEnd(10);
    insertEnd(20);
    insertEnd(30);
    insertEnd(40);
    insertEnd(50);

    printf("Original ");
    display();

    deleteBeginning();
    printf("After deleting from beginning: ");
    display();

    deleteEnd();
    printf("After deleting from end: ");
    display();

    deletePosition(2);
    printf("After deleting from position 2: ");
    display();

    return 0;
}
*/