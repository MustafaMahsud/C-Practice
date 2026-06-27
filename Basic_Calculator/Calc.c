#include <stdio.h>

int main()
{
char operator;
int num1,num2,result;

printf("Enter the operator you want to perform('+, -, %%, x'): ");
scanf("%c",&operator);

if (operator != '+' && operator != '-' && operator != 'x' && operator != '%')
{
printf("Wrong Input!");
return 1;
}
printf("Enter two numbers: ");
scanf("%d,%d",&num1,&num2);

switch (operator)
{
case '+':
{
result=num1+num2;
printf("%d is the sum of numbers",result);
break;
}

case '-':
{
result=num1-num2;
printf("%d is the subtraction of numbers",result);
break;
}

case 'x':
{
result=num1*num2;
printf("%d is the multiplication of numbers",result);
break;
}

case '%':
{
result=num1/num2;
printf("%d is the division of numbers",result);
break;
}

default:
{
printf("Wrong Input");    
break;
}

} 

return 0;
}