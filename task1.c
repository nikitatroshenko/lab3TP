#include "stdio.h"

int main()
{
    int age;							//integer field age
    while(True)
    {
        printf("Enter your age: ");				//printf instruction
        scanf("%d", &age);					//user enter age
        if(age > 0)
        {
            break;
        }
    }								
    printf("Your age in days: %d\n", age * 365 + age /4);	//prints age in days
}

