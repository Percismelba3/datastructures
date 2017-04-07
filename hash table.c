#include<stdio.h>
struct node
{
    int num;
    struct node*next;
};
void hashadd(struct node*hash[],int pos,int num)
{
    int elem,n;
    printf("Enter element:");
    scanf("%d",&elem);
    struct node*nnode=(struct node*)malloc sizeof(struct node);
    nnode->num=elem;
    nnode->next=hash[elem%10];
    hash[elem%10]=nnode;
}
void printhash(node*hash[])
{
    for(i=0;i<10;i++)
    {
        rider=hash[i];
        while(rider!=NULL)
          printf("%5d",rider->num);

    }

}
struct node* addatbeg(struct node *start)       //Adding an element at beginning
{
    struct node *nnodeptr;
    int elem;
    printf("\nEnter an element to add at beginning ");
    scanf("%d",&elem);
    nnodeptr=(struct node*)malloc(sizeof(struct node));
    nnodeptr->num=elem;
    nnodeptr->next=start;
    start=nnodeptr;
    return(start);
}
void
void  main()
{
    struct node*hash[10]={NULL};
    int arr[15]={89,11,35,56,78,23,72,64,97,59,47,65,43,12,36};
    slnode*start=NULL;
    printarr(arr);
    for(i=0;i<10;i++)
    {
        addatbeg(&start,arr[i]);
        addtohash(hashtable,arr[i]%10,arr[i]);
        traverse(start);
        print

    }


}
