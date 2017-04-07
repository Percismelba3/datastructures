#include<stdio.h>
#include<conio.h>

void push(char *stack,int *top,char ch)
{
                *top=*top+1;
                stack[*top]=ch;
}
void printstack(charstk[],int top)
{
                int p;
                rintf("The elements are");
                for(p=0;p<=top;p++)
                {
                                printf("%5d",stk[p]);
                }
}
void pop(char *stack,int *top)
{
                //  char ch=stack[*]
}


void main()
{
    char int[10]="a+b";
    char pos[10]=""
    int top=-1;
    char stk[10];
    printstack(stk,top);
    printf("\n infix is");
    for(p=0;int[p]!=\0;p++)
                printf("%3c",int[p]);

}
