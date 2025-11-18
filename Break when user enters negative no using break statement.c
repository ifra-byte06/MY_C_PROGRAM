#include <stdio.h>

int main()
{
    int n;

    while(1) {
        printf("Enter a number negative to stop ");
        scanf("%d", &n);

        if(n < 0) {
            break;
        }

        printf("You entered: %d\n", n);
    }
}
