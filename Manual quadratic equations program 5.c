#include <stdio.h>
#include <math.h>

int main() 
{
    float a, b, c, d, r1, r2;

    printf("Enter a, b, c: ");
    scanf("%f %f %f", &a, &b, &c);

    d = b*b - 4*a*c;

    if (d > 0) {
        printf("Real and Distinct\n");
        r1 = (-b + sqrt(d)) / (2*a);
        r2 = (-b - sqrt(d)) / (2*a);
        printf("Root1 = %.2f, Root2 = %.2f", r1, r2);
    }
    else if (d == 0) {
        printf("Real and Equal\n");
        r1 = -b / (2*a);
        printf("Root = %.2f", r1);
    }
    else {
        printf("Complex Roots\n");
        printf("No real roots");
    }

}
