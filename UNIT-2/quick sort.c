#include<stdio.h>
void swap(int* a, int* b) 
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int partition(int arr[], int lower, int upper) 
{
    int pivot = arr[upper];
    int i = lower - 1;  
    for (int j = lower; j < upper; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[upper]);
    return (i + 1);
} 

void quickSort(int arr[], int lower, int upper) 
{
    if (lower < upper) 
    {
        int pi = partition(arr, lower, upper);
        quickSort(arr, lower, pi - 1);  
        quickSort(arr, pi + 1, upper); 
    }
}
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main() 
{
    int arr[] = {10, 80, 30, 90, 40, 50, 70};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original Array: \n");
    printArray(arr, n);

    quickSort(arr, 0, n - 1);

    printf("Sorted Array: \n");
    printArray(arr, n);

    return 0;
}
