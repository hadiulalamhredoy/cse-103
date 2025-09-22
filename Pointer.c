//Introduction to pointer

#include<stdio.h>
int main()
{
    int x  =5;
    int* ptr;
    ptr = &x;
    printf("%d\n",x);
    printf("%d\n",&x);
    printf("%d\n",ptr);
    printf("%d\n",*ptr);

}

//pointer pointing to different variable

#include<stdio.h>
int main()
{
    int x =10,y=20,z=30;

    int*ptr;

    ptr = &x;
    printf("x = %d\n",*ptr);

    ptr = &y;
    printf("y = %d\n",*ptr);

    ptr = &z;
    printf("z = %d\n",*ptr);

}

//Adding two numbers using pointer
#include<stdio.h>
int main()
{
    int x =20,y=10,sum,sub,mul,div;

    int*ptr1,*ptr2;

    ptr1=&x;
    ptr2=&y;

    sum  = *ptr1 + *ptr2;
    sub  = *ptr1 -  *ptr2;
    mul  = *ptr1  *  *ptr2;
    div  =  *ptr1  *  *ptr2;
    printf("sum  = %d\n",sum);
     printf("sub  = %d\n",sub);
      printf("mul  = %d\n",mul);
       printf("div  = %d\n",div);



}

//swapping two numbers

#include<stdio.h>
int main()
{
    int x=10,y=20,temp;

    int *ptr1, *ptr2;

    ptr1= &x;
    ptr2= &y;

    //swapping

    temp  =  *ptr1;
    *ptr1 =  *ptr2;
    *ptr2  = temp;

    printf("x = %d\n",x);
    printf("y = %d\n",y);



}

//swapping two numbers using pointer and function
#include<stdio.h>

void swapping(int *ptr1,int *ptr2)
{
     int temp;
     temp  =  *ptr1;
     *ptr1 =  *ptr2;
     *ptr2 =   temp;

}

int main()
{
    int x  =10, y=20;

    printf("Before swapping :  x=%d,y=%d\n",x,y);
    swapping(x,y);
    

}

//Access array elements using pointer

#include<stdio.h>

int main()
{
    int a[5] = {10,20,30,40,50};

    int*ptr;

    ptr  = &a[0];

    for(int i=0 ; i<5;  i++){

      printf("%d\n",*ptr);
      ptr++;

    }

    }

//pass by value vs pass by reference

#include<stdio.h>
void modifyVaule(int num){

num = 20;

}
int main()
{
   int num = 10;
   printf("Before modification: %d\n",num);
   modifyVaule(&num);
   printf("After modification: %d\n",num);
   return 0;

}

