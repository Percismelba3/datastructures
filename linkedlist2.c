#include<stdio.h>
#include<conio.h>
#include<malloc.h>
typedef struct node
{
    int num;
    struct node*next;
};


//**************************************display

void display(struct node*start)
{
    printf("\n The list is \n");
    while(start!=NULL)
    {
        printf("%8d",start->num);
        start=start->next;
    }
}
//*************************************function to add at end

 node*addatend( node *end)
{

    int elem;
    struct node*nnodeptr;
    nnodeptr=(node*)malloc(size of(node));
    printf("\nEnter a value to add at end");
    scanf("%d",&elem);
    nnodeptr->num=elem;
    nnodeptr->next=NULL;
    *end->next=nnodeptr;
    *end=nnodeptr;
    return(end);
}
//****************************************fun to add at beginning

node *addatbeg(node *start)
{

    int elem;
    struct node *nnodeptr;
    nnodeptr=(node*)malloc(size of( node));
    printf("\nEnter elem for beg node");
    scanf("%d",&elem);
    nnodeptr->num=elem;
    nnodeptr->next=start;
    start=nnodeptr;
    return(start);
}
//******************************************function to add after/////////////////////
node *addatafter(node *after)
{
    nnodeptrnnodeptr=();
    nnodeptr->num=elem;
    nnodeptr->next=pos->next
    pos->next=nnodeptr;

}
//********************************************function to delete at beg
node *deletebeg(node *start)
{
    struct node*temp=start;
    start=start->next;
    free(temp);
    return(start);
}
//************************************************function to delete at end
node *deleteatend(node *start)
{
    struct node*temp;
    while(start->next->next!=NULL)
        start=start->end;
    temp=start->next;
    free(temp);
    start->next=NULL;
    return(start);
}

//***********************************************************************is htere
int isthere(node *start,int elem)
{
    while(start!=NULL)
    {
        if(start->num==elem)
            return(1);
        else
            start=start->next;
    }
    return(0);
}
//*******************************************to find the pos of an element
node *findpos(node *start,int elem)
{
    while(start->num!=elem)
        start=start->next;
    return(start);
}
//************************************making first node
void main()
{
    int elem;
    struct node *start,*end,*nnodeptr;
    nnodeptr=(struct node*)malloc(size of(struct node));
    printf("\nEnter a valueof node");
    scanf("%d",&elem);
    nnodeptr->num=elem;
    nnodeptr->next=NULL;
    start=nnodeptr;
    end=nnodeptr;
    end=addatend(end);
    display(start);
    start=addatbeg(start);
    display(start);
    start=delatbeg(start);
    display(start);
    start=delatend(start);
    display(start);
    start=findpos(start);
    display(start);
    after=addatafter(after);



}
