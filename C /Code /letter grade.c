#include<stdio.h>
int main()
{
int mark;
printf("Enter mark : ");
scanf("%d",&mark);

if(mark>100 || mark<0)
printf("invalid mark");

else if(mark>=80 && mark<=100)
printf("A+ 4.0");
else if(mark>=75 && mark<=79)
printf("A 3.75");
else if(mark>=70 && mark<=74)
printf("A- 3.5");
else if(mark>=65 && mark<=69)
printf("B+ 3.25");
else if(mark>=64 && mark<=60)
printf("B 3.00");
else if(mark>=59 && mark<=55)

printf("B- 2.75 ");

else if(mark>=54 && mark<=50)
printf("C+ 2.50 ");

else if(mark>=49 && mark<=45)
printf("C 2.25 ");

else if(mark>=44 && mark<=40)
printf("D 2.00");
else
printf("F 0”);
}
