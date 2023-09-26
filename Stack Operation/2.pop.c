#include<stdio.h>
int main()
{
    int top,x,i;
    int arr[5];
    for(top=0;top<=5;top++)
    {
        if(top==5)
        {
            printf("Stack is full\n");
        }
        else
        {
            printf("Enter the element: ");
            scanf("%d",&x);
            arr[top]=x;
        }
    }
    for(top=4; top>=-1; top--)
    {
        if(top==-1)
        {
            printf("stack is empty\n");
        }
        else
        {
            printf("Element is %d\n",arr[top]);
        }
    }

    return 0;
}