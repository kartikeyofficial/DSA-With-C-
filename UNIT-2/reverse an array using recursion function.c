#include<stdio.h>

void main()
{
    int a[20],i,n;
    printf("how many Numbers you want To input: ");
    scanf("%d",&n);
    if(n>20)
    {
        printf("\n Invalid Input!");
        
    }
    
      for(i=0;i<n;i++)
      {
        printf("Enter The Numbers in Array:\n ");
        scanf("%d",&a[i]);
      }
      printf("\nReversed Numbers Of Array:\n");
      reverse(a,n-1);
     
    
}
void reverse(int a[],int n)
{
    if(n==-1)
    return;
    printf("%d,",a[n]);
    reverse(a,n-1);
}
