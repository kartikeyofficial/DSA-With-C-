#include<stdio.h>
int sum_digits(int);
void main()
{
    int num, result;
    printf("Enter the Multi digit Number: ");
    scanf("%d",&num);
    result = sum_digits(num);
    printf("\n The Sum of the Number is: %d",result);
}
int sum_digits(int a)
{
    int b;
    static int sum=0;
    if(a==0)
    return a;
    else
    {
        b=a%10;
        sum = sum+b;
        sum_digits(a/10);
    }
    return (sum);
}