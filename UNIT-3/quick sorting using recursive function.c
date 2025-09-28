#include<stdio.h>
void quicksort(int a[], int low, int high);
int partition(int a[],int low,int high);
int a[20],n;
void main()
{
    int i,j;
    printf("How many numbers you want to input for the array: ");
    scanf("%d",&n);
    if(n>20)
    {
        printf("\n Invalid input, it should be less then 20");
        return;
    }
    for(i=0;i<n;i++)
    {
        printf("\n Enter The Number %d:",i+1);
        scanf("%d",&a[i]);
    }
    printf("\n The Original Array is as Follows:");
    for(i=0;i<n;i++)
    {
        printf("\n%d",a[i]);
        quicksort(a,0,n-1);
        printf("\n The sorted array is as Follows:");
        for(i=0;i<n;i++)
        printf("\n%d",a[i]);

    }

}
void quicksort(int a[], int low, int high)
{
    int j;
    if(low<high)
    {
        j= partition(a,low,high);
        quicksort(a,low,j-1);
        quicksort(a,j+1,high);
    }
}
    
int partition(int a[],int low,int high)
{
    int i,j,temp,key;
    key= a[low];
    i= low+1;
    j= high;
    while(1)
    {
        while(i<high && key>a[i])
        while(key < a[j])
        j--;
        if(i<j)
        {
            temp= a[i];
            a[i]= a[j];
            a[j] = temp;
        }
        else{
            temp= a[low];
            a[low]=a[j];
            a[j]= temp;
        }
        return j;
    }

}
    
