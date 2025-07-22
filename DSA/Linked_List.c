#include <stdio.h>
#include <stdlib.h> // for calloc(), realloc(), and free()

typedef struct Node
{
    int data;
    struct Node *next;
} Node;

typedef struct LinkedList
{
    Node *head;
} LinkedList;

// insert, search, delete
Node *search(const int *target, LinkedList *list)
{
    if (list == NULL)
    {
        return NULL; // Failure
    }
    Node *current = list->head;
    while (current != NULL)
    {
        if (current->data == *target)
            return current;
        current = current->next;
    }
    return NULL;
}

unsigned char insert(Node *node, LinkedList *list)
{
    if (node == NULL || list == NULL)
    {
        return 1; // Failure
    }
    if (list->head == NULL)
    {
        list->head = node;
        list->head->next = NULL;
        return 0; // Success
    }
    node->next = list->head;
    list->head = node;
    return 0; // Success
}

Node *createNode(int data)
{
    Node *temp = (Node *)calloc(1, sizeof(Node));
    temp->data = data;
    temp->next = NULL;
    return temp;
}

unsigned char delete(Node *node, LinkedList *list)
{
    if (node == NULL || list == NULL)
    {
        return 1; // Failure
    }

    if (node == list->head)
    {
        Node *temp = node;
        list->head = list->head->next;
        free(temp);
        return 0; // Success
    }

    Node *current = list->head;
    while (current != NULL)
    {
        if (current->next == node)
        {
            current->next = node->next;
            free(node);
            return 0; // Success
        }
        current = current->next;
    }
    return 1; // Failure, node not found
}

int main(void)
{
    LinkedList *list = (LinkedList *)calloc(1, sizeof(LinkedList));
    list->head = NULL;

    for (int i = 0; i < 3; i++)
    {
        insert(createNode(i + 1), list);
    }

    int myNum = 3;
    if (search(&myNum, list))
    {
        printf("Found the node with data %d\n", myNum);
    }
    else
    {
        printf("Node with data %d not found\n", myNum);
    }

    if (!delete(search(&myNum, list), list))
    {
        printf("Node with data %d deleted successfully\n", myNum);
    }
    else
    {
        printf("Failed to delete node with data %d\n", myNum);
    }

    Node *show = list->head;
    while (show != NULL)
    {
        printf("%d ", show->data);
        show = show->next;
    }

    // Free the allocated memory
    Node *current = list->head;
    while (current != NULL)
    {
        Node *temp = current;
        current = current->next;
        free(temp);
    }
    list->head = NULL;
    free(list);
    list = NULL;

    return 0;
}