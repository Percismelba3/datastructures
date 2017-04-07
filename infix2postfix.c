#include<stdio.h>
int getvalue(char val)
{
    if (val=='a')
        return (10);
    else if (val=='b')
        return 5;
    else if(val=='c')
        return 20;
    else if (val=='+'||val=='-')
        return (1);
    else if (val=='*'||val=='/')
        return (2);
    else
        return 0;
}
void printstack(char stk[],int top)
{
    int ele;
    printf("\nThe character stack is : \n");
    printf(" Top      Elements");
    for(ele=4;ele>=0;ele--)
    {

        if(ele==top)
            printf("\n%2d%19C",top,stk[ele]);
        else
            printf("\n%21C",stk[ele]);
    }
    if(top==-1)
        printf("\n %d",top);
    else
        printf("\n");
}
void printstacki(int stk[],int top)
{
    int ele;
    printf("\nThe integer stack is : \n");
    printf(" Top      Elements");
    for(ele=4;ele>=0;ele--)
    {

        if(ele==top)
            printf("\n%2d%19d",top,stk[ele]);
        else
            printf("\n%21d",stk[ele]);
    }
    if(top==-1)
        printf("\n %d",top);
    else
        printf("\n");
}
void printpostfix(char pf[])
{
    int c=0;
    printf("\nThe postfix expression is : ");
    while(c<6)
    {
        printf("%c",pf[c]);
        c++;
    }
}
void push(char stk[],int *top,char ch)
{
    *top+=1;
    stk[*top]=ch;
}
void pushi(int stk[],int *top,int ch)
{
    *top+=1;
    stk[*top]=ch;
}
char pop(char stk[],int *top)
{
    *top-=1;
    return stk[*top+1];
}
int popi(int stk[],int *top)
{
    *top-=1;
    return stk[*top+1];
}
int isfull(int top)
{
    if(top!=20)
        return 0;
    else
        return 1;
}
int isempty(int top)
{
    if(top==-1)
        return 1;
    else
        return 0;
}
void main()
{
    char exp[20]={"(a+b)*c)"},ch,temp;
    char stack[20]={},postfix[20]={};
    int c=0,pos=0,top=-1,topi=-1;
    int stacki[5]={};
    printf("\nThe infix expression is : ");
    while(c<8)
    {
        printf("%c",exp[c]);
        c++;
    }
    push(stack,&top,'(');
    printf("\nPress any key to Start the conversion.....");
    getch();
    for(c=0;exp[c]!='\0';c++)
    {
        ch=exp[c];
        printf("\nvalue of ch: %c",ch);
        if(ch=='a'||ch=='b'||ch=='c')
            postfix[pos++]=ch;
        else if(ch=='(')
            push(stack,&top,ch);
        else if(ch==')')
        {
            while(stack[top]!='(')
            {
                postfix[pos++]=pop(stack,&top);
            }
            top--;

        }
        else if(ch=='*'||ch=='+'||ch=='-'||ch=='/')
        {
            temp=stack[top];
            while(getvalue(temp)>=getvalue(ch))
            {

                    temp=pop(stack,&top);
                    postfix[pos++]=temp;

            }
            push(stack,&top,ch);
        }
        printpostfix(postfix);
    }
    for(c=0;c<10;c++)
        exp[c]=postfix[c];
    printf("\nPress any key to start evaluation\n");
    getch();
    int op1,op2;
    printf("The Expresssion is : ");
    for(c=0;exp[c]!='\0';c++)
        printf("%c",exp[c]);
    for(c=0;exp[c]!='\0';c++)
    {
        ch=exp[c];
        printf("\nvalue of ch: %c\n",ch);
        if(ch=='a'||ch=='b'||ch=='c')
        {
            if(isfull(top)==1)
                printf("The stack is full !! cannot perform push\n");
            else
            {
                push(stack,&top,ch);
                pushi(stacki,&topi,getvalue(ch));
            }
        }
        else if(ch=='*'||ch=='+'||ch=='-'||ch=='/')
        {
            op1=popi(stacki,&topi);
            pop(stack,&top);
            op2=popi(stacki,&topi);
            pop(stack,&top);
            if(ch=='*')
                pushi(stacki,&topi,(op1*op2));
            else if(ch=='+')
                pushi(stacki,&topi,(op1+op2));
            else if(ch=='-')
                pushi(stacki,&topi,(op2-op1));
            else if(ch=='/')
                pushi(stacki,&topi,(op2/op1));
        }
        printstack(stack,top);
        printstacki(stacki,topi);
        printf("\npress any key to continue....");
        getch();
        printf("\n__________________\n");
    }
    printf("\nThe resultant is : %d\n",popi(stacki,&topi));
}
