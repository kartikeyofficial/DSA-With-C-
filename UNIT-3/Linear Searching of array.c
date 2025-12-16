#include<stdio.h>
int main()
{
    int a[20];
    int loc,n,i,item;
    printf("Enter The Terms How many You want: ");
    scanf("%d",&n);
    if(n>20)
    {
        printf("\nInvalid Input! please Give Less Than 20");
    }
    for(i=0;i<n;i++)
    {
        printf("\nEnter The Array Elements: ");
        scanf("%d",&a[i]);
    }
    printf("\nEnter The Item For Which you Want to:");
    scanf("%d",& item);
    for (i=0;i<n;i++)
    {
        if(a[i]==item)
        {
            loc=i;   
            break;
        }
    }
    if(i==n)
    {
        printf("\nItem %d is Not in the List",item);
    }
    else
    {
        printf("\nItem %d is present %dth location indexing",item,loc);
    }
}