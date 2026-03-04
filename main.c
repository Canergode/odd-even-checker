#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;

    // Get number from user
    printf("Enter a number:\n");
    scanf("%d",&number);

    // Check if the number is even or odd
    if(number%2==0)
    {
        printf("The number is even.");
    }
    else
    {
        printf("The number is odd.");
    }
    return 0;
}
