#include <stdio.h>

int main()
{
    int n;
    printf("Enter number");
    scanf("%d", &n);

    if(n % 3 == 0 && n % 5 == 0)
        printf("Divisible");
    else
        printf("Not Divisible");

}
