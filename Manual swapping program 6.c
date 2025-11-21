#include <stdio.h>

void swap(int*a,int*b) 
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int bal1, bal2;

    printf("Enter Balance 1: ");
    scanf("%d", &bal1);

    printf("Enter Balance 2: ");
    scanf("%d", &bal2);

    printf("\nBefore Swapping:\n");
    printf("Balance 1 = %d\n", bal1);
    printf("Balance 2 = %d\n", bal2);

    swap(&bal1, &bal2);   

    printf("\nAfter Swapping:\n");
    printf("Balance 1 = %d\n", bal1);
    printf("Balance 2 = %d\n", bal2);
}
