#include<stdio.h>
int main()
{
    int a[100],n,i,j,temp;
    printf("Enter the Terms of Element:\n");
    scanf("%d",&n);
    printf("Enter the Element in Array:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(j=1;j<n;j++)
    {
        temp = a[j];
        for(i=j-1; temp<a[i] && i>=0; i--)
        {
            a[i+1] = a[i];
        }
        a[i+1] = temp;
    }
    printf("sorted Array\n");
    for(i=0;i<n;i++)
    {
        printf("%d,",a[i]);
    }
}