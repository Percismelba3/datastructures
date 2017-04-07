#include<stdio.h>
#include<malloc.h>
struct node
{
    int num;
    struct node*next;
};
void hashadd(struct node*hash[])
{
    int elem,n;
    printf("Enter element:");
    scanf("%d",&elem);
    struct node*nnode;
    nnode=(struct node*)malloc(sizeof(struct node));
    nnode->num=elem;
    nnode->next=hash[elem%10];
    hash[elem%10]=nnode;
}
void printhash(struct node*hash[])
{
    int i;
    struct node *rider;
    for(i=0;i<10;i++)
    {
        rider=hash[i];
        printf("%d",i);
        while(rider!=NULL)
        {
          printf("%5d",rider->num);
          rider=rider->next;

    }

}
void  main()
{
    struct node*hash[10]={NULL};
    int arr[15]={89,11,35,56,78,23,72,64,97,59,47,65,43,12,36};
    hashadd(hash);
    printhash(arr);
1}
