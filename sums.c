#include <stdio.h>
#include <string.h>
 
int Sum(int *input, int n);
 
int main()
{
    int input[100], count, i;
     
    printf("Enter number of elements in Array: ");
    scanf("%d", &i);
    printf("Enter %d numbers \n ", i);
    for(count = 0; count < i; count++)
    {
        scanf("%d", &input[count]);
    }
     
    printf("Sum of all numbers are : %d \n",
    Sum(input,i - 1));
    return 0;
}

int Sum(int *input, int n)
{
     if(NULL == input || n < 0)
        return 0;
     return input[n] + Sum(input, n -1);
}
DSDSSSSCSCS
