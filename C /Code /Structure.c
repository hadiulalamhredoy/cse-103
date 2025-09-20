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

//concatenation without strcat()


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

       person3 = person2;

       if(person1.age==person2.age && person1.salary==person2.salary)
         printf("Person 1 is equal to Person2");

    else
         printf("Person 1 is not equal to Person2");


    }
//Array of structure

#include<stdio.h>  
struct person
{
    int age;
    float salary;
};

int main()
{
    struct Person person[4];
    int i;
    
    for(i=0;i<4;i++)
    {
        printf("Enter information for  Person %d\n",i+1);
        printf("Enter Age : ");
        scanf("%d",&person[i].age);
        
        printf("Enter Salary : ");
        scanf("%f",&person[i].salary);
        
        
    }
    
    for(i=0;i<4;i++)
    {
        printf("Information for  Person %d\n",i+1);
        printf("Age:%d",&person[i].age);
        printf("Salary:%f",&person[i].salary);
        
        
    }
    
    
}

// Array within structure

#include<stdio.h>  
struct person
{
    char name[50];
    int age;
    float salary;
};

int main()
{
    struct Person person[4];
    int i;
    
    for(i=0;i<4;i++)
    {
        printf("Enter information for  Person %d\n",i+1);
        print("Enter Name :");
        gets(person[i].name);
        printf("Enter Age : ");
        scanf("%d",&person[i].age);
        
        printf("Enter Salary : ");
        scanf("%f",&person[i].salary);
        
        
    }
    
    for(i=0;i<4;i++)
    {
        printf("Information for  Person %d\n",i+1);
        printf("Age:%d",&person[i].age);
        
        printf("Salary:%f",&person[i].salary);
        
        
    }
    
    
}

// passing structure variable to function







