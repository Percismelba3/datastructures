#include<stdio.h>
#include<malloc.h>
struct node
{
    int num;
    struct node*next;
};
void display(struct node* hash[])
{
    int i;
    struct node* rider;
    for(i=0;i<10;i++)
    {
        rider=hash[i];
        printf("%3d",i);
        while(rider!=NULL)
            {
                printf("%5d",rider->num);
                rider=rider->next;
            }
         printf("\n");
    }
}
int search(int num,struct node* rider)
{
    int flag=0,el=num;
    while(rider!=NULL)
    {
        if(rider->num==el)
        {
            flag=1;
            break;
        }
        rider=rider->next;
    }
    if(flag==0)
        printf("element not found");
    else
        printf("element found at index %d ",el%10);
}
void add(struct node* hash[])
{
    int elem,n;
    struct node*nnodeptr;
    printf("\n enter th element to add  ");
    scanf("%d",&elem);
    nnodeptr=(struct node*)malloc(sizeof(struct node));
    nnodeptr->num=elem;
    n=elem%10;
    if(hash[n]==NULL)
       {
           hash[n]=nnodeptr;
           nnodeptr->next=NULL;
       }
       else
        {
            nnodeptr->next=hash[n];
            hash[n]=nnodeptr;
        }

}
void main()
{
    struct node* hash[10]={NULL};
    int i;
    for(i=0;i<10;i++)
    {
        add(hash);
        display(hash);
    }

    int elem;
    printf("\n enter the elemnent to be searched \n");
    scanf("%d",&elem);
    int n=elem%10;
    search(elem,hash[n]);
}
