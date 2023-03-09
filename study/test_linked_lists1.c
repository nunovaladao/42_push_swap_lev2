#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int value;
    struct node *next;
} node;

void insert_after(node *Node, int value)
{
    node *new_node = malloc(sizeof(node));
    if (new_node == NULL)
        return;
    new_node->value = value;
    new_node->next = Node->next;
    Node->next = new_node;
}

void insert_end(node **head, int number)
{
    node *new = malloc(sizeof(node));
    if (new == NULL)
        exit(1);
    new->value = number;
    new->next = NULL;
    
    if (*head == NULL)
    {
        *head = new;
        return;
    }
    
    node *curr = *head;
    while (curr->next != NULL)
        curr = curr->next;
    curr->next = new;
}

void insert_beginning(node **head, int value)
{
    node *new_node = malloc(sizeof(node));
    if (new_node == NULL)
        return;
    new_node->value = value;
    new_node->next = *head;

    *head = new_node;
}

void print_list(node *head)
{
    node *tmp = head;
    while (tmp != NULL)
    {
        printf("%d -> ", tmp->value);
        tmp = tmp->next;
    }
    printf(" NULL");
}

int main()
{
    node *head = NULL;

    insert_end(&head, 1);
    insert_end(&head, 3);
    insert_end(&head, 4);

    insert_after(head, 2);
    insert_after(head->next->next->next, 5);

    print_list(head);

    //free(head);
    return 0;
} 