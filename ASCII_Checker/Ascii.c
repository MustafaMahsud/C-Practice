#include <stdio.h>

int main()
{
char input;

printf("Enter input: ");
scanf("%c",&input);

if (input >= 'A' && input <= 'Z')
{
    printf("You entered a capital letter!");
}

else if (input >= 'a' && input <= 'z')
{
    printf("You entered a small letter!");
}

else if (input >= '0' && input <= '9')
{
    printf("You entered a digit!");
}

else
{
    printf("You entered a special character!");
}

return 0;
}