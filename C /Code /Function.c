//Sum of 2/3 numbers
#include<stdio.h>
int sum(int a ,int b, int c)
{
   printf("The sum is  :  %d\n",a+b+c);

}

void sub(int a ,int b,int c)
{
    printf("The sub is : %d\n",a-b-c);
}

void multiplies(int a ,int b,int c)
{
    printf("The mul is : %d\n",a*b*c);
}

void divides(int a ,int b,int c)
{
    printf("The div is : %d\n",a/b/c);
}


int main()
{

    sum(0,20,7);
    sub(27,7,0);
    multiplies(20,7,1);
    divides(140,7,1);
}

//Square of a number

#include<stdio.h>
int square(int a)
{
    return a * a ;

}
int main()
{

    int num;
    printf("Enter any integer number : ");
    scanf("%d",&num);

    int result = square(num);
    printf("Sqaure is : %d\n",result);
}

// Area of a Triangle
#include<stdio.h>
double triangleArea(double b,double h);
int main()
{
   double base,heigth;

   printf("Enter Base  : ");
   scanf("%lf",&base);

   printf("Enter Heigth  : ");
   scanf("%lf",&heigth);

    double area = triangleArea(base,heigth);

    printf("Area = %.lf\n",area);

}

{

    return 0.5 * b * h;
}

//X To The Power Y using User-defined Function
//base^exponent
//2^3= 2*2*2=8
//2^4= 2*2*2*2=16
//3^4= 3*3*3*3=81
#include<stdio.h>
void calculatePower(double base , double exp){
double result =1,i;
for( i =1; i<=exp; i++)
{
   result = result * base;

}

    printf("%.1lf\n",result);


}


int main()
{

    double base,exp,result=1,i;

     printf("Enter base  = ");
     scanf("%lf",&base);

     printf("Enter exp = ");
     scanf("%lf",&exp);

     calculatePower(base,exp);

}

//x to the power y (using /not using) Library function
#include<stdio.h>
int main()
{



     double base,exp,result=1,i;

     printf("Enter base  = ");
     scanf("%lf",&base);

     printf("Enter exp = ");
     scanf("%lf",&exp);


    for(i =1;i<exp;i++)
    {
        result =  result *  base;
    }

      printf("%lf\n",result);


}





