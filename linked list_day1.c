#include<stdio.h>
#include<stdlib.h>
#include <stdbool.h>
#include<conio.h>
struct node{
    int data;
    struct node * next;
};
int main()
{
    char check;
    int flag=0;
    struct node *start;
    struct node *ptr;
    start=(struct node *)malloc(sizeof(struct node));
    ptr=(struct node *)malloc(sizeof(struct node));
    start=NULL;
    ptr=NULL;
    do{
        struct node *head;
        int data;
        head=(struct node *)malloc(sizeof(struct node));
        printf("\nEnter the data = ");
        scanf("%d",&data);
        head->data= data;
        head->next=NULL;
        flag++;
        if(flag==1)
        {
            start=head;
            ptr=head;
        }
        else{
            ptr->next=head;
            ptr=head;
        }
        printf("Do you want to add another node?\nIf yes enter y else n : ");
        check = getche();
    }while(check !='n');
    printf("\n");
    while(start!=NULL)
    {
        printf("%d->",start->data);
        start=start->next;
    }
    printf("NULL");
}
