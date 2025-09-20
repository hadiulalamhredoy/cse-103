 //Introduction to Structure

#include<stdio.h>
//global structure
struct Person
{
    int age;
    float salary;

};


int main()
{

    struct Person person1,person2;

    person1.age =20;
    person1.salary = 15550.00;

    printf("Person1 : \n");
    printf("Age = %d\n",person1.age);
    printf("Salary = %.2f\n",person1.salary);

     getch();



    person2.age =25;
    person2.salary = 17550.00;

    printf("Person2 : \n");
    printf("Age = %d\n",person2.age);
    printf("Salary = %.2f\n",person2.salary);

     getch();


}

//Input structure element

#include<stdio.h>
struct person
{
    int age;
    float salary;
};
    int main()
    {
       struct person person1,person2;//Local Variable

       printf("Enter information for person1\n");
       printf("Enter the age for person1 : ");
       scanf("%d",&person1.age);

       printf("Enter the salary for person1 : ");
       scanf("%f",&person1.salary);


       printf("Enter information for person2\n");
       printf("Enter the age for person2 : ");
       scanf("%d",&person2.age);

       printf("Enter the salary for person2 : ");
       scanf("%f",&person2.salary);

    }

//initialize structure variables
#include<stdio.h>
struct person
{
    int age;
    float salary;
};
    int main()
    {

       struct person person1 = {27,25500,25};
       struct person person2,person3;

       //elementwise assignment
       person2.age =25;
       person2.salary  = 277750.87;

       //structure variable assignment
       printf("Enter information for person1\n");
       printf("Enter the age for person1 : ");
       scanf("%d",&person1.age);

       printf("Enter the salary for person1 : ");
       scanf("%f",&person1.salary);


       printf("Enter information for person2\n");
       printf("Enter the age for person2 : ");
       scanf("%d",&person2.age);

       printf("Enter the salary for person2 : ");
       scanf("%f",&person2.salary);

       printf("Enter information for person3\n");
       printf("Enter the age for person3 : ");
       scanf("%d",&person3.age);

       printf("Enter the salary for person3 : ");
       scanf("%f",&person3.salary);


    }





