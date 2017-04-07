#include<stdio.h>
printarr(int arr[])
{
    int p;
    for(p=0; p<7; p++)
        printf("%5d ",arr[p]);
}
quick(int arr[],int left,int right)
{
    int pivot,l,r,temp;
    pivot=arr[left];
    printf("pivot is %d",pivot);
    l=left,r=right;
    while(l<r)
    {
        while(arr[r]>pivot)
            r--;
        temp=arr[r];
        arr[r]=arr[l];
        arr[l]=temp;
        printarr(arr);
        while(arr[l]<pivot)
            l++;
        temp=arr[l];
        arr[l]=arr[r];
        arr[r]=temp;
        printarr(arr);
    }

    if(l-left>1)
        quick(arr,left,r-1);
    if(right-r>1)
        quick(arr,l+1,right);

}

void main()
{
    int arr[7]= {12,3,6,3,15,9,58},p,left=0,right=6;
    quick(arr,left,right);
    printf("\n\nThe sorted array is : ");
    for(p=0; p<7; p++)
        printf("%5d ",arr[p]);
}
