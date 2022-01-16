#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
    struct Node *prev;
};

void linkedListTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}
void linkedListTraversalBackward(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->prev;
    }
}

int main(){
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;
    struct Node * fifth;

    // Allocate memory for nodes in the linked list in Heap
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));
    fifth = (struct Node *)malloc(sizeof(struct Node));

    // Link first and second nodes
    head->data = 7;
    head->next = second;
    head->prev = NULL;

    // Link second and third nodes
    second->data = 11;
    second->next = third;
    second->prev = head;

    // Link third and fourth nodes
    third->data = 41;
    third->next = fourth;
    third->prev = second;

    //Link fourth and fifth nodes
    fourth->data = 66;
    fourth->next = fifth;
    fourth->prev = third;

    //Terminate the list at the fourth node
    fifth->data = 83;
    fifth->next = NULL;
    fifth->prev = fourth;

    printf("Linked list Traversal\n");
    linkedListTraversal(head);
    printf("Linked list Traversal backward\n");
    linkedListTraversalBackward(fifth);

    return 0;
}

