// check if the number is even or odd
#include <stdio.h>
int main()
{

    int number;
    if (number % 2 == 0)
    {
        printf("%d is even", number);
    }
    else
    {
        printf("%d is odd", number);
    }
    return 0;
}


//Exponential Expression
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
   // Calculating square root
   double number = 25.0;
   double squareRoot = sqrt(number);
   printf("Square root of %lf is %lf\n", number, squareRoot);

   // Calculating power
   double base = 2.0;
   double exponent = 3.0;
   double result = pow(base, exponent);
   printf("%lf raised to the power of %lf is %lf\n", base, exponent, result);

   // Calculating absolute value
   int value = -10;
   int absoluteValue = abs(value);
   printf("The absolute value of %d is %d\n", value, absoluteValue);

   // Rounding functions
   double floatingNumber = 3.456;
   double roundedDown = floor(floatingNumber);
   double roundedUp = ceil(floatingNumber);
   printf("Original: %lf, Rounded Down: %lf, Rounded Up: %lf\n", floatingNumber, roundedDown, roundedUp);

   return 0;
}


//Factorial
#include<stdio.h>
int factorial (int n)
{
int i,result;
result=1;
for(i=1;i<=n;i++)
result=result*i;
return result;

}

main()
{
int num,a;
printf("Enter a non-negative integer :");
scanf("%d",&num);
a=factorial (num);
printf("%d",a);

}


//// find largest numer of 3 numbers
#include <stdio.h>
int main()
{

    int number1, number2, number3;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &number1, &number2, &number3);
    if (number1 > number2 && number1 > number3)
    {
        printf("%d is the largest number\n", number1);
    }
    else if (number2 > number1 && number2 > number3)
    {
        printf("%d is the largest number\n", number2);
    }
    else if (number3 > number1 && number3 > number2)
    {
        printf("%d is the largest number\n", number3);
    }
    else
    {
        printf("Both numbers are equal\n");
    }
    return 0;
}


//  // check a year is a leap year or not
#include <stdio.h>
int main()
{

    int year;
    printf("Enter a year: ");
    scanf("%d", &year);

    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
    {
        printf("%d is a leap year\n", year);
    }
    else
    {
        printf("%d is not a leap year\n", year);
    }

    return 0;
}


//Raise  Power  
#include<stdio.h>
int main()
{
int x,y;
printf("Enter x =");
scanf("%d",&x);
printf("Enter y =");
scanf("%d",&y);
double result=pow(x,y);
printf("%.2lf",result);

}


// Sqauare or Cube
#include<stdio.h>
int square (int x)
{
int s;
s=x*x;
return s;
}

int cube (x)
{
int c;
c=x*x*x;

return c;
}
main ()
{
int a,b,c;
scanf("%d",&a);
b=square(a);
c=cube(a);
printf("%d %d",b,c);
}

//Sum and average of a  3 Numbers
#include <stdio.h>
#include <ctype.h>
int main(){
  int num1, num2, num3, sum;
  float average;

  printf("Enter num1 = ");
  scanf("%d", &num1);

  printf("Enter num2 = ");
  scanf("%d", &num2);

  printf("Enter num3 = ");
  scanf("%d", &num3);

  sum = num1 + num2 + num3;
  printf("%d + %d + %d = %d\n",num1,num2,num3,sum);

  average = (float)sum/3;
  printf("Average = %.2f\n",average);  

  getchar();
}


//Letter grade  

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
//
// Online C compiler to run C program online
#include <stdio.h>

int main() {
 
      int i;
      float f;
      double d;
      char ch;
      
      
      printf("size of int = %d\n",sizeof(i));
        printf("size of float = %d\n",sizeof(f));
          printf("size of double = %d\n",sizeof(d));
            printf("size of char = %d\n",sizeof(ch));
 
 

    return 0;
}
// find largest numer of 2 numbers
#include <stdio.h>
int main()
{

    int number1, number2;
    printf("Enter two numbers: ");
    scanf("%d %d", &number1, &number2);
    if (number1 > number2)
    {
        printf("%d is the largest number\n", number1);
    }
    else if (number2 > number1)
    {
        printf("%d is the largest number\n", number2);
    }
    else
    {
        printf("Both numbers are equal\n");
    }
    return 0;
}

//N factorial of the number .
#include<stdio.h>
int main()
{
int n,i,fact=1;
printf("Enter any positive number : ");
scanf("%d",&n);

for(i=1;i<=n;i++)

{
fact = fact * i;
printf("%d\n",fact);

}

//Write a complete C program to find the temperature T from the following equation: PV= nRT. Where, P, V, n, Rrepresents pressure, volume, amount of substance and idealgas constant. R= 8.314 J/mol·K.
#include<Stdio.h>
int main()
{
float P,V , n , R, T;
printf("Pressure=");
scanf("%f",&P);
printf("Volume=");
scanf("%f",&V);
printf("Amount of substance=");
scanf("%f",&n);
T=(P * V) / (n * 8.314);
printf("temperature: %.3f\n",T);
}

//4.Write a C programme to quardtric equation ax^2 + bx + c = 0

#include<stdio.h>
#include<math.h>
int main()
{
float a,b,c,x1,x2;
printf(" a = ");
scanf("%f",&a);
printf(" b = ");
scanf("%f",&b);
printf(" c = ");
scanf("%f",&c);
x1 = (-b + sqrt(b * b - 4 * a * c))/ ( 2 * a );
x2 = (-b - sqrt(b * b - 4 * a * c))/ ( 2 * a );
printf("%f",x1,"\n");
printf("%f",x2,"\n");

}

//find out the GCD & LCM PROBLEM  

#include <stdio.h>

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int main() {
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("GCD of %d and %d = %d\n", num1, num2, gcd(num1, num2));
    printf("LCM of %d and %d = %d\n", num1, num2, lcm(num1, num2));

    return 0;
}
