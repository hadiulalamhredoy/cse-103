#include<stdio.h>
int main()
{
char colour;

printf("Enter an character = ");
scanf("%c",&colour);

switch (colour)
{
case 'g':
printf("%c is green.\n",colour);
break;

case 'y' :
printf("%c is yellow.\n",colour);
break;

case 'red' :
printf("%c is red.\n",colour);
break;

default:
printf("Invalid input.\n");
break;

}

return 0;

}
