#include "stdio.h"

int main()
{
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Your age in days: %d\n", age * 365 + age /4);
}
