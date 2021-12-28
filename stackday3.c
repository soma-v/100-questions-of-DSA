#include <stdio.h>
//last in first out
int top = -1, stack[100], l;
void pop()
{
    if (top == -1 || top == 0)
    {
        printf("Stack is underflow\n");
    }
    else
    {
        printf("element = %d is removed from the stack\n", stack[top - 1]);
        top = top - 1;
    }
}
void push()
{
    if (top == -1)
    {
        int e;
        printf("Enter the element to put in stack = ");
        scanf("%d", &e);
        top = top + 1;
        stack[top] = e;
        top = top + 1;
    }
    else if (top < l)
    {
        int e;
        printf("Enter the element to put in stack = ");
        scanf("%d", &e);
        stack[top] = e;
        top = top + 1;
    }
    else
    {
        printf("Stack is overflow\n");
    }
}
void peck()
{
    printf("Element at the top of the stack is %d\n", stack[top - 1]);
}
void display()
{
    for (int i = 0; i < top; i++)
    {
        printf("%d  ", stack[i]);
    }
    printf("\n");
}
int main()
{
    printf("\nStack implementation using array\n");
    printf("Enter the length of the stack = ");
    scanf("%d", &l);
    printf("1.PUSH\n2.POP\n3.PECK\n4.DISPLAY\n5.TERMINATE\n\n");
    int ch;
    do
    {
        printf("Enter your choice = ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            peck();
            break;
        case 4:
            display();
            break;
        case 5:
            printf("exit\n");
            break;
        default:
            printf("Enter a valid choice\n");
        }
    } while (ch != 5);
    return 0;
}