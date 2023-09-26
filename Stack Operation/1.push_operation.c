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
    // printf("these are the element stored in the stack: \n");
    // for(i=0; i<5; i++)
    // {
    //     printf("%d\n",arr[i]);
    // }
    return 0;
}