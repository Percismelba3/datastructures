#include<stdio.h>
void display(int stack[],int top)
{
    int p;
    printf("\nstack:");
    for(p=top;p>=0;p--)
        printf("\n%d",stack[p]);
}
void indisplay(int stack[],int top)
{
    int p;
    printf("\nstack:");
    for(p=top;p>=0;p--)
        printf("\n%c",stack[p]);
}
int getval(char ch)
{
    if(ch=='a')
        return 10;
    if(ch=='b')
        return 5;
    if(ch=='c')
        return 2;
    if(ch=='d')
        return 8;
    if(ch=='e')
        return 4;
}
void push(int num,int *stack[],int *top)
{
    *top=(*top)+1;
    stack[*top]=num;
}
void inpush(char ch,int *stack[],int *top)
{
    *top=(*top)+1;
    stack[*top]=ch;
}
int pop(int *stack[],int *top)
{
    return (stack[(*top)--]);
}
char inpop(int *stack[],int *top)
{
    return (stack[(*top)--]);
}
int priority(char ch)
{
    if(ch=='^')
        return 5;
    else if(ch=='*')
        return 4;
    else if(ch=='/')
        return 4;
    else if(ch=='-')
        return 3;
    else if(ch=='+')
        return 3;
    else if(ch==')')
        return 2;
    else
        return 0;
}
void main()
{
    int stack[20],op1,op2,i,p=-1,j,num,top=-1,c;
    char post[20],infix[20]="(a+b)*c-d/e",ch;
    display(stack,top);
    for(i=0;infix[i]!='\0';i++)
    {
        ch=infix[i];
        printf("\nch=%c",ch);
        if(ch=='a'||ch=='b'||ch=='c'||ch=='d'||ch=='e')
        {
            p=p+1;
            post[p]=ch;

        }
        else if(ch=='(')
        {
            inpush(ch,stack,&top);
        }
        else if(ch=='^'||ch=='*'||ch=='/'||ch=='+'||ch=='-')
        {
            if(priority(ch)<=priority(stack[top]))
            {
                p=p+1;
                post[p]=inpop(stack,&top);
                inpush(ch,stack,&top);

            }
            else
            {
                inpush(ch,stack,&top);
            }

        }
        else if(ch==')')
        {
            while(stack[top]!='(')
            {
                p=p+1;
                post[p]=inpop(stack,&top);            }

        }
        indisplay(stack,top);
    }
    while(top>=1)
    {
        p=p+1;
        post[p]=inpop(stack,&top);
    }
    printf("\nPostfix expression is:\n");
    for(j=0;j<=p;j++)
    {
        printf("%c",post[j]);
    }
    post[j]='\0';
    inpop(stack,&top);
    printf("\npostfix expression evaluation:\n");
    display(stack,top);

    for(i=0;post[i]!='\0';i++)//postfix evaluation
    {
        ch=post[i];
        printf("\nch=%c",ch);
        if(ch=='a'||ch=='b'||ch=='c'||ch=='d'||ch=='e')
        {
            push(getval(ch),stack,&top);
        }

        else if(ch=='+')
        {
            op1=pop(stack,&top);
            op2=pop(stack,&top);
            push((op2+op1),stack,&top);
        }
        else if(ch=='-')
        {
            op1=pop(stack,&top);
            op2=pop(stack,&top);
            push((op2-op1),stack,&top);
        }
        else if(ch=='*')
        {
            op1=pop(stack,&top);
            op2=pop(stack,&top);
            push((op2*op1),stack,&top);
        }
        else if(ch=='/')
        {
            op1=pop(stack,&top);
            op2=pop(stack,&top);
            push((op2/op1),stack,&top);
        }
        else if(ch=='%')
        {
            op1=pop(stack,&top);
            op2=pop(stack,&top);
            push((op2%op1),stack,&top);
        }
        display(stack,top);
    }

}

