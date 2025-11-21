#include <stdio.h>

int Pass(int m1, int m2, int m3)
{
    if (m1 >= 40 && m2 >= 40 && m3 >= 40) {
        return 1;   
    } else {
        return 0;
    }
    }

int main() {
    int s1, s2, s3;
    float average;

    printf("Enter marks of three subjects: ");
    scanf("%d %d %d",&s1,&s2,&s3);

    average = (s1+s2+s3)/ 3;

    printf("Average = %.2f\n", average);

    if (Pass(s1, s2, s3)) {
        printf("Status: Passed");
    } else {
        printf("Status: Failed");
    }
}
