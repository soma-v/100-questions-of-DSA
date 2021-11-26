#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <conio.h>
struct node
{
    int data;
    struct node *next;
};
struct node *start = NULL;
struct node *temp1 = NULL;
struct node *temp2 = NULL;
int insert_at_begin()
{
    struct node *new;
    new = (struct node *)malloc(sizeof(struct node));
    int data;
    printf("Enter the data = ");
    scanf("%d", &data);
    if (start == NULL)
    {
        start = new;
        start->data = data;
        start->next = NULL;
    }
    else
    {
        new->next = start;
        new->data = data;
        start = new;
    }
}
int insert_at_end()
{
    struct node *new;
    new = (struct node *)malloc(sizeof(struct node));
    int data;
    printf("Enter the data = ");
    scanf("%d", &data);
    if (start == NULL)
    {
        start = new;
        start->data = data;
        start->next = NULL;
    }
    else
    {
        struct node *insert = start;
        while (insert->next != NULL)
        {
            insert = insert->next;
            continue;
        }
        insert->next = new;
        new->data = data;
        new->next=NULL;
    }
}
int del_at_begin()
{
    if (start == NULL)
    {
        printf("No nodes :(\ng");
    }
    else
    {
        printf("Deleted\n");
        start = start->next;
    }
}
int del_at_end()
{
    if (start == NULL)
    {
        printf("No nodes :(");
    }
    else
    {

        struct node *del = start;
        while (del->next->next != NULL)
        {
            del = del->next;
            continue;
        }
        del->next = NULL;
        printf("Deleted\n");
    }
}
int display()
{
    temp2 = start;
    if (temp2 == NULL)
    {
        printf("No nodes :(\n");
    }
    else
    {
        while (temp2 != NULL)
        {
            printf("%d->", temp2->data);
            temp2 = temp2->next;
        }
        printf("Null\n");
    }
}
int main()
{
    int c;
    printf("1.Insert a node at the begining\n");
    printf("2.Insert a node at the end\n");
    printf("3.Delete the node at the begining\n");
    printf("4.Delete the node at the end\n");
    printf("5.Display the nodes\n");
    printf("6.exit\n");
    do
    {
        printf("\nEnter your choice = ");
        scanf("%d", &c);
        switch (c)
        {
        case 1:
            insert_at_begin();
            break;
        case 2:
            insert_at_end();
            break;
        case 3:
            del_at_begin();
            break;
        case 4:
            del_at_end();
            break;
        case 5:
            display();
            break;
        case 6:
            printf("terminating....");
        }

    } while (c != 6);
}