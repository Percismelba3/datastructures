#include<stdio.h>
#include<conio.h>
void main()
{
    int arr[6]={63,34,54,85,76,27},p,temp;
    for(p=0;p<6;p++)
    {
        printf("%d\n",arr[p]);
    }
    for(p=0;p<6-1;p++)
    {
        if (arr[p+1]<arr[p])
        {
            temp=arr[p+1];
            arr[p+1]=arr[p];
            arr[p]=temp;
        }

    }
    printf("array after sorting is \n");
    for(p=0;p<6;p++)
    {
        printf("%d\n",arr[p]);
    }
}
