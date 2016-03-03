#include "stdio.h"

int main()
{
    int age;							//integer field age
    printf("Enter your age: ");					//printf instruction
    scanf("%d", &age);						//user enter age
    printf("Your age in days: %d\n", age * 365 + age /4);	//prints age in days
}
