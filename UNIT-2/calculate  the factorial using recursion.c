#include<stdio.h>
int fact(int n);
int main()
{
    int num,j;
    printf("Enter the Number:\n");
    scanf("%d",&num);
    j = fact(num);
    printf("Factorial of Number= %d",j);
}
int fact(int n)
{
    if(n==0)
    return 1;
    else
    return (n*fact(n-1));
}