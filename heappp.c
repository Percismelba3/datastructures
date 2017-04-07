#include<stdio.h>
#include<conio.h>

void display(int heap[],int last)
{
    int p;
    printf("\n\nThe heap is : \n");
    for(p=1; p<=last; p++)
        printf("\n%d",heap[p]);
}
void addheap(int heap[],int *last)

{
    int p,c,temp;
    (*last)++;
    c=(*last);
    ///printf("\n\nEnter ")
    //(last)++;
    printf("\n\n Enter the element: ");
    scanf("%d",&heap[*last]);
    while(c>1 && heap[(c/2)]>heap[c])
    {
        temp=heap[c];
        heap[c]=heap[c/2];
        heap[c/2]=temp;
        c=c/2;
    }
    printf("\n\nThe heap is : \n");
    for(p=1; p<=*last; p++)
        printf("\n%d",heap[p]);

}
void delheap(int heap[],int *last)
{
    int c,l,r,par,temp;

    temp=heap[1];
    heap[1]=heap[*last];
    heap[*last]=temp;
    (*last)--;
    par=1;
    l=2;r=3;
    while(r<=*last)
    {

        if(heap[l]<heap[r])
            c=l;
        else
            c=r;
        printf("hi par=%d lc=%d rc=%d c=%d",heap[par],heap[l],heap[r],heap[c]);
        getch();
        if(heap[par]>heap[c])
        {
            temp=heap[c];
            heap[c]=heap[par];
            heap[par]=temp;
            par=c;

        }
        else
            break;
        l=2*par;
        r=2*par+1;
       // printf("\n par=%d lc=%d rc=%d c=%d",heap[par],heap[l],heap[r],heap[c]);
        //getch();
        display(heap,*last);

    }
    if(l==*last && heap[par]<heap[l])
    {
        temp=heap[l];
        heap[l]=heap[par];
        heap[par]=temp;
    }
    display(heap,*last);
}




void main()
{
    int heap[10],p,last=0;
    addheap(heap,&last);
    for(p=1; p<9; p++)
        addheap(heap,&last);
    delheap(heap,&last);
    for(p=1; p<9; p++)
        delheap(heap,&last);
}
