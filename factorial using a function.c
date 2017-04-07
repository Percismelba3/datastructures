#include<stdio.h>
#include<conio.h>
int fact(int);
int main()
{
    int a;
    printf("Enter a no: ");
    scanf("%d",&a);
    fact(a);
}

int fact(int n)
{
    int i,r;
    r=1;
    for(i=1;i<=n;i++)
    {
        r=r*i;
    }

    printf("%d\n",r);

}
