#include<stdio.h>
void display(int stk[],int top)
{
    int p;
    printf("The contents in the stack are : \n\n");
    printf("top         val");
    for(p=4; p>=0; p--)
    {
        if(top==p)
        {
            printf("\n%d         %3d",top,stk[p]);
        }
        else
        {
            printf("\n           %3d",stk[p]);
        }
    }
    if(top==-1)
        printf("\n %3d",top);
}

void push(int stk[],int *toppointer)
{
    int elem;

    printf("\nEnter the element to be pushed\n");
    scanf("%d",&elem);

    (*toppointer)++;
    stk[*toppointer]=elem;
}

void pop(int stk[],int *toppointer)
{
    int elem;

    printf("\n element popped : %d\n",stk[*toppointer]);

    (*toppointer)--;
    elem=stk[*toppointer];
}

int isfull(int top)
{
    if (top==4)
        return 0;
    else
        return 1;
}
int isempty(int top)
{
    if (top==-1)
        return 1;
    else
        return 0;
}
void main()
{
    int stk[5],top=-1,choice=0;
    display(stk,top);
    for(;;)
    {
        printf("\nEnter choice : 1 push 2 pop 3 exit : ");
        scanf("%d",&choice);
        if(choice==1)
        {
            if ((isfull(top))==1)
                push(stk,&top);
            else
                printf("\nstack is full");
            display(stk,top);
        }
        if(choice==2)
        {
            if((isempty(top))==0)
            {
                pop(stk,&top);
                display(stk,top);
            }
            else
                printf("Stack empty");

        }
        if(choice==3)
        {
            exit(0);
        }
        getch();
        system("cls");
    }



}
