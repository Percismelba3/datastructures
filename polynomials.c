#include<stdio.h>
struct node
{
    int coeff;
    int pow;
    struct node *next;
};
void display(struct node *rider)
{
    while(rider!=NULL)
    {
        if(rider->coeff!=0)
        {
            if(rider->pow==0)
            {
                printf("%d",rider->coeff);

            }
            else if(rider->pow==1 )
            {
                printf("%dx",rider ->coeff);
            }
            else if(rider->coeff==1 && rider ->pow==1)
            {
                printf("x");
            }
            else if (rider->coeff==1)
            {
                printf("x^%d",rider->pow);
            }
            else
                printf("%dx^%d",rider->coeff,rider->pow);

        }
        if(rider->next!=NULL)
        {
            printf(" + ");
        }
        rider=rider->next;

    }
}
void add(struct node **start,struct node **end,int c,int p)
{
    struct node *nnodeptr;
    nnodeptr=(struct node *)malloc(sizeof(struct node));
    nnodeptr->coeff=c;
    nnodeptr->pow=p;
    nnodeptr->next=NULL;
    if(*start==NULL)
        *start=*end=nnodeptr;
    else
    {
        (*end)->next=nnodeptr;
        *end=nnodeptr;
    }
}
void addition(struct node *s1,struct node *s2,struct node **start,struct node **end)
{
    while(s1!=NULL&&s2!=NULL)
    {
        if(s1->pow==s2->pow)
        {
            add(start,end,(s1->coeff+s2->coeff),s1->pow);
            s1=s1->next;
            s2=s2->next;

        }
        else if(s1->pow>s2->pow)
        {
            add(start,end,s1->coeff,s1->pow);
            s1=s1->next;
        }
        else if(s2->pow>s1->pow)
        {
            add(start,end,s2->coeff,s2->pow);
            s2=s2->next;
        }
    }
    while(s1!=NULL)
    {

        add(start,end,s1->coeff,s1->pow);
        s1=s1->next;
    }
    while(s1!=NULL)
    {
        add(start,end,s2->coeff,s2->pow);
        s2=s2->next;
    }
}
void main()
{
    struct node *start1=NULL, * end1=NULL,*start2=NULL,*end2=NULL,*rstart=NULL,*rend=NULL;
    int terms=0 ,c ,p;
    printf("\n\nEnter the no: of terms : ");
    scanf("%d",&terms);
    while(terms>0)
    {
        printf("\nEnter the cofficient \n :");
        scanf("%d",&c);
        printf("Enter the power : ");
        scanf("%d",&p);
        add(&start1,&end1,c,p);
        terms--;
    }

    printf("\n\nEnter the no: of terms : ");
    scanf("%d",&terms);
    while(terms>0)
    {
        printf("\nEnter the cofficient \n :");
        scanf("%d",&c);
        printf("Enter the power : ");
        scanf("%d",&p);
        add(&start2,&end2,c,p);
        terms--;
    }
     printf("\nFirst polynomial is : ");
    display(start1);
    printf("\nsecond polynomial is : ");
    display(start2);
    printf("\n---------------------------------------\n");
    addition(start1,start2,&rstart,&rend);
    printf("Resultant polynomial is : ");
    display(rstart);
}
