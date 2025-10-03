//Introduction to File  
#include<stdio.h>
int main()
{
    FILE *file;
    file = fopen("test.txt","w");

    if(file==Null)
    {
        printf("File doesn't exist");
    }

    else
    {
        printf("File is open");
        fclose(file);
    }



}

//Writing to a file using fputc()
#include<stdio.h>
int main()
{
    FILE *file;
    char name[20] = "Hadiul Alam Hredoy";
    int length  = strlen(name);
    int i;
    file = fopen("test.txt","w");

    if(file==NULL)
    {
        printf("File doesn't exist");
    }

    else
    {
        printf("File is open");
        for(i=0 ; i<length;i++){
            fputc(name[i],file);
        }
        printf("File is writeen suceesfully");

        fclose(file);
    }



}


//Writing to a file using fputs()
#include<stdio.h>
int main()
{
    FILE*file;
    char name[20];
    int age;

    file = fopen("test.txt","a");
    if(file==NULL)
    {
        printf("File doesn't exist");
        printf("Enter your name : ");
        gets(name);

        printf("Enter your age  : ");
        scanf("%d",&age);

        fprintf("file,Name:%s\n,Age:%d\n",name,age);
    }

    else{
        printf("File is opened\n");
        printf("Enter your university name : ");
        gets(name);

        fputs(name,file);
        printf("File is written succesfully");
        fclose(file);
    }


}

//Reading a file using fgetc()
#include<stdio.h>
int main()
{
    FILE*file;
    char ch;
    int age;

    file = fopen("test.txt","a");
    if(file==NULL)
    {
        printf("File doesn't exist");

    }
else{
    printf("File si opened");
    while(!feof(file))
    {
        fgets(ch,39,file);
        printf("%s\n",ch);

    }

    printf("File is written succesfully");

}

}

// Reading a file using fgets()
#include<stdio.h>
int main()
{
    FILE*file;
    char ch;
    int age;

    file = fopen("test.txt","a");
    if(file==NULL)
    {
        printf("File doesn't exist");

    }
else{
    printf("File si opened");
    while(!feof(file))
    {
        fgets(ch,39,file);
        printf("%s\n",ch);

    }

    printf("File is written succesfully");

}

}

//storing student details
#include<stdio.h>
int main()
{
    FILE*file;
    char name[20];
    int age,phone number,i;

    file = fopen("Student.txt","a");

    if(file==NULL)
    {
        printf("File doesn't exist");

    }

    else
    {

        printf("File is opened");

        printf("Enter number of students : ");
        scanf("%d",&num);

        for(i=1;i<=num;i++)
        {
          printf("Enter Student name  : ");
           scanf("%s\n",&name);

          printf("Enter Student age  : ");
           scanf("%d\n",&age);

            printf("Enter Student phonenumber  : ");
            scanf("%d\n",&phoneNumber);

            fprintf(file,"%s\t\t%d\n",name,age,phoneNumber);



        }

        fclose(file);
    }

}







