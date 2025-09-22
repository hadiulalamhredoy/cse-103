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

