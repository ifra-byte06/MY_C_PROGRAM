#include <stdio.h>

int main() {
    char first[50], last[50], full[100];
    int i = 0, j = 0, length = 0;

    printf("Enter First Name: ");
    scanf("%s", first);

    printf("Enter Last Name: ");
    scanf("%s", last);

    
    while (first[i] != '\0') {
        full[i] = first[i];
        i++;
    }

    
    full[i] = ' ';
    i++;
    while (last[j] != '\0') {
        full[i] = last[j];
        i++;
        j++;
    }

   
    full[i] = '\0';

    
    i = 0;
    while (full[i] != '\0') {
        length++;
        i++;
    }

    printf("\nFull Name: %s", full);
    printf("\nLength of Full Name: %d\n", length);

    
    if (length <= 20) {
        printf("Status: Fits the screen\n");
    } else {
        printf("Status: Too long for screen\n");
    }

    
}
   
