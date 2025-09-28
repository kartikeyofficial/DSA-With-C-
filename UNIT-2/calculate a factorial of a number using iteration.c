#include<stdio.h>
int main()
{
    int a ,fact;
    printf("Enter a Any Number:");
    scanf("%d",&a);
    while(a!= 0)
    {
        fact= fact*a;
        a--;
    }
    printf(fact);
}