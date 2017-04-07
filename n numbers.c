#include<stdio.h>
#include<conio.h>
int num(int);
int main()
{
    int a;
    printf("Enter a no:\n");
    scanf("%d",&a);
    num(a);

}

int num(int x)
{
    int i;
    for(i=0;i<=x;i++)
        printf("%d\n",i);

}
