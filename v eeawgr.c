#include<stdio.h>
#include<conio.h>
#include<malloc.h>
//************************************************************************push function
void push(char *stackc,int *topc,char ch)
{
                stackc[++(*topc)]=ch;
}

//************************************************************************showstack function
void showstack(char *stackc,int topc)
{
                printf("\n the stack is\n");
                for(int p=topc;p>=0;p--)
                                printf("\n%c,stackc[p]");
}
//************************************************************************main
char popc(char *stackc,int *topc)
{
                return(stackc[(*topc]--)
}

void main()
{
                int stack[10],top=-1,elem,p,topc=-1,pos=0;
                char stack[0],ch;
                char infix[10]="((a+b))";
                char postfix[10]="";
                postfix[10]='\0';
                for(p=0;(ch=infix[p])!='\0';p++)                   //\0 means null character
                {
                                printf("\n the char is %c",ch);

                                if(ch=='(')
                                {
                                                push(stackc,&topc,ch);
                                }
                                showstack(stackc,topc);
                                if((ch=='a')||(ch=='b')||(ch=='c'))
                                {
                                                printf(("\n"))
                                                postfix[pos++]=ch;
                                }
                                if(ch==')')
                                {
                                                char chpop;
                                                while ( chpop=popc(stackc,&topc)!='(')
                                                {
                                                                 postfix[pos++]=chpop;
                                                                 showstack(stackc,topc);
                                                                 printf("\npostfix=%s and postfix=%d",postfix,pos);

                                                }

                                }
                                if(ch==''||ch=='*'||ch=='-'||ch=='/')
                                {
                                                printf("\noperator found:");
                                               // push(stackc,&topc,ch)
                                }
                                push(stackc,&topc,ch)
                                 printf("\npostfix=%s and postfix=%d",postfix,pos);

}
                }
               // printf("\npostfix=%s and postfix=%d",postfix,pos);

}
