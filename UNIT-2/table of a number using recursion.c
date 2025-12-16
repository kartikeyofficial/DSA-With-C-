#include<stdio.h>
int table(int,int);
void main()
{
    int a,b,i;
    printf("Enter The any Number:");
    scanf("%d",&a);
    for(i=1;i<=10;i++)
    {
        printf("\n %d*%d = %d",a,i,table(a,i));

    }

}
int table(int a, int i)
{
    if(i==1)
    {
        return a;
    }
    else
    return (table(a,i-1)+a);
}