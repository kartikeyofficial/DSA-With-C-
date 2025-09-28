#include<stdio.h>
int main()
{
    int i, a[100], search, first, last, middle, n;
    printf("Enter the Number of Elements:\n");
    scanf("%d",&n);
    printf("Enter the Elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n Enter the Element to be Search: ");
    scanf("%d",&search);
    first = 0;
    last = n-1;
    middle = (first+last)/2;
    while(first<=last)
    {
        if(a[middle]<search)
        {
            first = middle+1;
            middle = (first+last)/2;
        }
        else if(a[middle]==search)
        {
            printf("\nThe Number, %d Found at Position %d",search,middle+1);
            break;
        }
        else
        {
            last = middle;
            middle = (first+last)/2;
        }
    }
    if(first>last)
    {
        printf("\n The Number, %d Is not Found in given Array",search);
    }
}