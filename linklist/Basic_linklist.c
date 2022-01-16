#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

void linkedListTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}
struct Node* reverseList(struct Node *head)
{
    struct Node *p=NULL,*q,*r;
    q=head;
    r= head->next;
    head->next = NULL;

    while(r != NULL)
    {
        p=q;
        q=r;
        r=r->next;
        q->next = p;
    }
    return q;
}

int main(){
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;
    struct Node *fifth;

    // Allocate memory for nodes in the linked list in Heap
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));
    fifth = (struct Node *)malloc(sizeof(struct Node));

    // Link first and second nodes
    head->data = 7;
    head->next = second;


    // Link second and third nodes
    second->data = 11;
    second->next = third;

    // Link third and fourth nodes
    third->data = 41;
    third->next = fourth;

    //Link fourth and fifth nodes
    fourth->data = 66;
    fourth->next = fifth;


    //Terminate the list at the fourth node
    fifth->data = 83;
    fifth->next = NULL;


    printf("Linked list Traversal\n");
    linkedListTraversal(head);
    printf("reverse of a link list");
    reverseList(head);
    return 0;
}
