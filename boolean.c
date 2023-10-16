#include <stdio.h>

int main()
{
    int age;
    char drink = "Alcohol or non alcoholic drink";
    printf("Enter your age: \n");
    scanf("%i", &age);

    if (age < 18)
        // if the above statements evaluates to true the printf in the if statements will be displayed
    {
        printf("You are too young");
    }else
        // if the above statements evaluates to false the printf in the else statements will be displayed

    {
        printf("Utakunywa nini mkuu");
    }

}
