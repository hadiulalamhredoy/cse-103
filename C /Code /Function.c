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

