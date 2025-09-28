#include<stdio.h>
int hcf(int,int);
void main()
{
    int a,b, result;
    printf("Enter The First Number:");
    scanf("%d",&a);
    printf("Enter The second Number:");
    scanf("%d",&b);
    result= hcf(a,b);
    printf("The Hcf of %d and %d is: %d ",a,b,result);
}
int hcf(int a,int b)
{
    int result;
    if(b==0)
    return a;
    
    else
    {
        result = a%b;
        return(hcf(b,result));
    }
}