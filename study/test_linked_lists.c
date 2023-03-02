#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int value;
    struct node *next;
} node_t;

void print_list(node_t *head)
{
    node_t *tmp = head;

    while (tmp != NULL)
    {
        printf("%d -> ", tmp->value);
        tmp = tmp->next;
    }
    printf("NULL\n");
}

void create_and_add_last(node_t **head, int value)
{
    node_t *newnode;
    if (!(newnode = malloc(sizeof(newnode))))
        return;

    newnode->value = value;
    newnode->next = NULL;

    if (*head == NULL)
        *head = newnode;
    else
    {
        node_t *lastnode = *head;

        while (lastnode->next != NULL)
            lastnode = lastnode->next;
        lastnode->next = newnode;
    }
}


int main()
{
    node_t *head = NULL;

    /* add_last(&head, 10);
    add_last(&head, 20);
    add_last(&head, 30); */

    int i = 0;
    while (i <= 5)
    {
        create_and_add_last(&head, i);
        i++;
    }

    print_list(head);
    return 0;
}