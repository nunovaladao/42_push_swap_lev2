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
    puts(" NULL");
}

void sort_list(node **head, int value)
{
    if (*head == NULL || (*head)->value >= value)
    {
        insert_beginning(head, value);
        return;
    }
    
    node *curr = *head;
    while (curr->next != NULL)
    {
        if (curr->next->value >= value)
            break;
        curr = curr->next;
    }
    insert_after(curr, value);
}

int main(int ac, char **av)
{
    node *head = NULL;
    int i = 1;
    (void)ac;
    while (av[i])
    {
        sort_list(&head, atoi(av[i]));
        i++;
    }
    print_list(head);

    //free(head);
    return 0;
} 