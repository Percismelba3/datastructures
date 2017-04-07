#include<stdio.h>
#include<conio.h>
#include<malloc.h>
typedef struct node
{
    int num;
    struct node*next;
}*node;


//**********************************************************display

void display(struct node *start)
{
    printf("\n The list is \n");
    while(start!=NULL)
    {
        printf("%8d",start->num);
        start=start->next;
    }
}
//*************************************function to add at end

struct node *addatend(struct node *end)
{

    int elem;
    struct node*nnodeptr =( struct node*)malloc(sizeof(struct node));
    printf("\nEnter a value to add at end");
    scanf("%d",&elem);
    nnodeptr->num=elem;
    nnodeptr->next=NULL;
    end->next=nnodeptr;
    end=nnodeptr;
    return(end);
}
//*************************************************************fun to add at beginning

struct node *addatbeg(struct node *start)
{

    int elem;
    struct node *nnodeptr=(struct node*)malloc(sizeof( struct node));
    printf("\nEnter elem for beg node");
    scanf("%d",&elem);
    nnodeptr->num=elem;
    nnodeptr->next=start;
    start=nnodeptr;
    return(start);
}
//**************************************************************function to add after
//struct node *addatafter(struct node *after)
//{
    //nnodeptrnnodeptr=();
    //nnodeptr->num=elem;
    //nnodeptr->next=pos->next
   // pos->next=nnodeptr;

//}
//********************************************function to delete at beg
struct node *delatbeg(struct node *start)
{
    struct node*temp=start;
    start=start->next;
    free(temp);
    return(start);
}
//************************************************function to delete at end
struct node *delatend(struct node *start)
{
    struct node*temp;
    while(start->next->next!=NULL)
        start=start->next;
    temp=start->next;
    free(temp);
    start->next=NULL;
    return(start);
}

//***********************************************************************is htere
node * isthere(struct node *start,int elem)
{
    while(start!=NULL)
    {
        if(start->num==elem)
            return(start);
        else
            start=start->next;
    }
    return(NULL);
}
//*******************************************to find the pos of an element
struct node *findpos(struct node *start,int elem)
{
    while(start->num!=elem)
        start=start->next;
    printf("postion of %d is %d",elem,start);
    return(start);
}
//************************************making first node
void main()
{
    int elem,search,pos;
    struct node *start,*end,*nnodeptr,*loc;
    nnodeptr=(node*)malloc(sizeof(node));
    printf("\nEnter a valueof node");
    scanf("%d",&elem);
    nnodeptr->num=elem;
    nnodeptr->next=NULL;
    start=nnodeptr;
    end=nnodeptr;
    end=addatend(start);
    display(start);
    start=addatbeg(start);
    display(start);
    start=delatbeg(start);
    display(start);
    start=delatend(start);
    display(start);
    printf("elwm whose pos need to be found");
    scanf("%d",&pos);
    loc=findpos(start,pos);
    display(start);
    printf("\n the loc of the pos is %u", loc);
    //after=addatafter(after);
   // display(after);
    printf("elem  to be srchd");
    scanf("%d",&search);
    if(loc = isthere(start,search)== NULL)
        printf("\n the searched element %d is not found",search);
    else
        printf("\n the searched element %d is found at location %u",search, loc);
    display(start);



}
