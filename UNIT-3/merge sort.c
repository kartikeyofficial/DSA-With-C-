#include<stdio.h>
#define MAX 20
int a[MAX];
void merge(int low, int mid, int high)
{
    int temp[MAX];
    int i=low,j=mid+1,k=low;
    while((i<=mid)&&(j<=high))
    {
        if(a[i]<a[j])
        {
            temp[k]=a[i];
            k++;
            i++;
        }
        else
        {
            temp[k]=a[j];
            k++;
            j++;
        }
         }
    while(i<=mid)
    {
        temp[k]=a[i];
        k++;
        i++;
    }
    while(j<=high)
    {
        temp[k]=a[j];
        k++;
        j++;

    }
    for(i=0;i<=high;i++)
    {
        a[i]=temp[i];
    }
}
void mergesort(int low, int high)
{
    int mid;
    if(low!=high)
    {
        mid=(low+high)/2;
        mergesort(low,mid);
        mergesort(mid+1,high);
        merge(low,mid,high);
    }
}
void main()
{
    int i,n;
    printf("Enter The NUmber Of Elements: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\nEnter TheElements %d: ",i+1);
        scanf("%d",&a[i]);

    }
    printf("\n Unodered List is:");
    for(i=0;i<n;i++)
    {
        printf("\n%d",a[i]);
        mergesort(0,n-1);
        printf("\nSorted List is:");
        for(i=0;i<n;i++)
        {
            printf("\n%d",a[i]);
        }
    }
}
