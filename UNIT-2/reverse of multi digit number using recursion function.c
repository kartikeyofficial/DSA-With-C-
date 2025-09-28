
#include <stdio.h>
int reverseNumber(int num, int reversed) 
{

    if (num == 0) 
    {
        return reversed;
    }
    reversed = reversed * 10 + num % 10;
    return reverseNumber(num / 10, reversed);
}

int main() 
{
    int number, reversedNumber;
    printf("Enter a multi-digit number: ");
    scanf("%d", &number);
    reversedNumber = reverseNumber(number, 0);
    printf("Reversed number: %d\n", reversedNumber);

    return 0;
}
