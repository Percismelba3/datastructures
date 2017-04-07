#include<stdio.h>
#include<conio.h>

int getval(char ch)
{
                if(ch=='a')
                                return(10);
                if(ch=='b')
                                return(5);
}
void showstacki(int *stacki, int top)
{
                int t;
                printf("\n the stack is\n");
                for(t=top;t>=0;t--) //printing from top to bottom
                                printf("%d\n",stacki[t]);
}
void pushi(int *stacki,int val,int *top)
{
                (*top)++;
                stacki[*top]=val;
}
int popi(int *stacki, int *top)
{
                int elem=stacki[*top];
                (*top)--;
                return(elem);
}
void main()
{
                int p,pos,num,stacki[5],top=-1,first,second;
                char post[]="ab+";

                for(p=0;post[p]!='\0' ;p++)
                {
                                char ch = post[p];
                              // printf("%c",post[p]);
                               if (ch=='a'|| ch=='b')
                               {
                                               pushi(stacki,getval(ch),&top);
                                               showstacki(stacki,top);
                               }
                               if(ch=='+')
                               {
                                               first=popi(stacki,&top);
                                               second=popi(stacki,&top);
                                               int ans=second + first;
                                               pushi(stacki,ans,&top);

                               }
                }
                printf("\n the answer is %d",popi(stacki,&top));



}
