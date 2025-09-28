#include<stdio.h>
int main()
{
    int a[100],n,i,j,temp;
    printf("Enter The Terms of Element:\n");
    scanf("%d",&n);
    printf("Enter the Element in Array:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;

            }
        }
    }
    printf("Sorted Array\n");
    for(i=0;i<n;i++)
    {
        printf("%d,",a[i]);
    }
}