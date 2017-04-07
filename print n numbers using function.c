#include<stdio.h>
#include<conio.h>
int sqr(int );
int main()
{
    int x,y;
    x=10;
    y=sqr(x);
    print ("The square of x is %d\n", y)
    return 0;

}

int sqr(a);
{
    int b;
    b=a*a;
    return b;
}
