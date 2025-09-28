#include<stdio.h>
int main()
{
    int a[100], i, j, temp,n;
    printf("Enter The Array Size:");
    scanf("%d",&n);
    printf("Enter The Array Elements:\n");
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp= a[i];
                a[i]= a[j];
                a[j]= temp;
            }
        }
    }
    printf("Selection sorting\n");
    for(i=0;i<n;i++)
    {
        printf("%d,",a[i]);
    }
}