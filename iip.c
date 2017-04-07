#include<stdio.h>
#include<conio.h>
void main()
{
        int a,b,c,*ip;
        ip=&a;
        *ip=5;
        printf("\n The new value of a is %d",a);
        ip=&b;
        *ip=10;
        printf("\n The new value of b is %d",b);
        ip=&c;
        *ip=15;
        printf("\n The new value of c is %d",c);
}
