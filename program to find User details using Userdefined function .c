#include <stdio.h>
int userdetails()
{
char name, department;
int age;
printf("Enter your name:");
scanf("%s", &name);
printf("Enter your age:");
scanf("%d", &age);
printf("Enter your department:");
scanf("%s", &department);
}
int main()
{
    userdetails();
}
