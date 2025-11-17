#include <stdio.h>
int main()
{
    int num;
    float value;

    printf("Enter an integer: ");
    scanf("%d", &num);

    printf("Enter a float value: ");
    scanf("%f", &value);

    printf("\nYou entered:\n");
    printf("Integer: %d\n", num);
    printf("Float: %.2f\n", value);
    return 0;
}
