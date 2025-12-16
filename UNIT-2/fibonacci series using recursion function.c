#include<stdio.h>
int fibo(int n);
int main()
{
    int num,i,j;
    printf("Enter the Terms of The Series:\n");
    scanf("%d",&num);
    for(i=0;i<num;i++)
    {
        j = fibo(i);
        printf("%d ",j);
    }
}
    int fibo(int n)
    {
        if(n==0)
        return 0;
        else if(n==1)
        return 1;
        else
        return fibo(n-1)+fibo(n-2);
    }
