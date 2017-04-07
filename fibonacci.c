#include<stdio.h>
#include<conio.h>
int fib(int);
int main()
{
    int a;
    printf("Enter the limit of no: ");
    scanf("%d",&a);
    fib(a);

}

int fib(int a)
{
    int t,f,s,i;
    f=0;
    s=1;
    printf("%d\t",f);
    for(i=1;i<a-1;i++)
    {
        t=f+s;
        printf("%d\t",s);
        f=s;
        s=t;
    }
}
