#include <stdio.h>
#include <stdlib.h>

/*struct representing a node*/
struct node {
    int data;
    struct node* next;
    };

struct node* create_node(int data) {
    struct node* new_node = (struct node*)malloc(sizeof(struct node));
    new_node->data = data;
    new_node->next = NULL;
    return (new_node);
}

/*function appending to last node*/
void add_node(struct node** head_ref, int new_data)
{
    struct node* new_node = create_node(new_data);

    if (*head_ref == NULL) {
        *head_ref = new_node;
        return;
    }

    struct node* last = *head_ref;
    
    while (last->next != NULL)
    {
        last = last->next;
    }
    last->next = new_node;
}

/*function to remove node*/
void remove_node(struct node** head_ref, int data)
{
    if (*head_ref == NULL) {
        return;
    }

    if ((*head_ref)->data == data)
    {
        struct node* temp = *head_ref;
        *head_ref = (*head_ref)->next;
        free(temp);
        return;
    }

    struct node* current = *head_ref;
    while (current->next != NULL && current->next->data != data)
    {
        current = current->next;
    }
    if (current->next != NULL)
    {
        struct node* temp = current->next;
        current->next = current->next->next;
        free(temp);
    }
}

/*function to display linked list*/
void display_list(struct node* head)
{
    while (head != NULL) {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}

int main()
{
    struct  node* head = NULL;

    add_node(&head, 1);
    add_node(&head, 2);

    printf("Original list: ");
    display_list(head);

    return (0);
}
    
