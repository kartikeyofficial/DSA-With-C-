#include<stdio.h>
int main()
{
    int a[100],i,j,n,temp;
    printf("Enter the Terms of Element:\n");
    scanf("%d",&n);
    printf("Enter the Element in Array:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }

    }
    printf("Shorting Array\n");
    for(i=0;i<n;i++)
    {
        printf("%d,",a[i]);
    }
}