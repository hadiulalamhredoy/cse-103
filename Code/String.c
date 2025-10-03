//Introduction to String  
#include<stdio.h>
int main()
{
    char s1[6];
    s1[0] = 'A';
    s1[1] = 'n';
    s1[2] = 'i';
    s1[3] =  's';
    s1[4] = '\0';

    printf("s1 = %s\n",s1);
}

//Alternative way  

#include<stdio.h>
int main()
{
   char s1{Hadiul};  

  printf("s1=%s\n",s1);
}

//Input and display String
#include<stdio.h>
int main()
{
    char s1[30];
    printf("Enter full name  : ");
    gets(s1);

    printf("s1 = %s\n",s1);


}

// Display string character-wise
#include<stdio.h>
int main()
{
    char s1[]= "Lubaba Bintay Nehal Oishee";

    int i = 0, len=0;

    while(s1[i]!='\0')
    {

        i++;
        len++;
    }

       printf("Length = %d\n",len);
}

//copy string using strcpy()
#include<stdio.h>
int main()
{
    char source[]="C Programming";
    char target[20];

    strcpy(target,source);
    printf("Source string = %s\n",source);
    printf("target string = %s\n",target);



}

// concatenation using strcat()
#include<stdio.h>
int main()
{
   char str1[50]="My Name is";
   char str2[]="Jannatul Ferdous Sneha";

    int i=0,len=0,j=0;
    while(str1[i]!='\0')
    {
        i++;
        len++;
    }
    while(str2[j]!='\0')
    {
        str1[len+j]=str2[j];
        j++;
    }

   printf("str1 = %s\n",str1);
}

//concatenation without strcat()

#include<stdio.h>
int main()
{
    char str1[] = "Lubaba Bintay Nehal";
    char str2[] = "Oishee";

     int d = strcmp(str1,str2);

     if(d==0)
     {
         printf("String are Equal");
     }

    else
    {
        printf("String are not equal");
    }

}

//
#include<stdio.h>
int main()
{
   char str1[] = "Rakib Ahmed";

    strrev(str1);

    printf("str1 = %s\n",str1);



}
//.Comkpare with 2 String  
#include<stdio.h>
int main()
{
    char str1[] = "Lubaba Bintay Nehal";
    char str2[] = "Oishee";

     int d = strcmp(str1,str2);

     if(d==0)
     {
         printf("String are Equal");
     }

    else
    {
        printf("String are not equal");
    }

}
//String Reverse  
#include<stdio.h>
int main()
{
   char str1[] = "Rakib Ahmed";

    strrev(str1);

    printf("str1 = %s\n",str1);



}

//
#include<stdio.h>
int main()
{
    char str1[30]="Hadiul Alam Hredoy";
    char str2[30];

    int i =0,len=0,j;

    while(str1[i]!='\0'){

        i++;
        len++;
    }

    for(j=0,i=len-1; i>=0;i--,j++)
    {
        str2[j] = str1[i];

    }

      str2[j]='\0';
    printf("str1 = %s\n",str1);
    printf("str2 = %s\n",str2);
}
//String reverse without strrev()
#include<stdio.h>
int main()
{
    char str1[30]="Hadiul Alam Hredoy";
    char str2[30];

    int i =0,len=0,j;

    while(str1[i]!='\0'){

        i++;
        len++;
    }

    for(j=0,i=len-1; i>=0;i--,j++)
    {
        str2[j] = str1[i];

    }

      str2[j]='\0';
    printf("str1 = %s\n",str1);
    printf("str2 = %s\n",str2);
}


//string palindrome
#include<stdio.h>
int main()
{
    char str1[30]="Hadiul Alam Hredoy";
    char str2[30];

    int i =0,len=0,j;

    while(str1[i]!='\0'){

        i++;
        len++;
    }

    for(j=0,i=len-1; i>=0;i--,j++)
    {
        str2[j] = str1[i];

    }

      str2[j]='\0';
    printf("str1 = %s\n",str1);
    printf("str2 = %s\n",str2);

    int d = strcmp(str1,str2);
    if(d==0)
    {
       printf("String are Palindrome");
    }

    else{
        printf("String are not Palindrome");
    }
}

//string swapping
#include<stdio.h>
int main()
{
    char str1[15] = "Bangladesh";
    char str2[15] = "India";
    char temp[15];

    printf("Before Swapping\n");
    printf("str1 = %s\n",str1);
    printf("str2 = %s\n",str2);

    strcpy(temp,str1);
    strcpy(str1,str2);
    strcpy(str2,temp);

    printf("\n\nAfter Swapping\n");
    printf("str1 = %s\n",str1);
    printf("str2 = %s\n",str2);
}



//
#include<stdio.h>
int main()
{
    char str[] = "Anisul Islam";
    strlwr(str);

    printf("str = %s\n",str);



}
//strupr() and strlwr()
#include<stdio.h>
int main()
{
    char str[] = "Anisul Islam";
    strlwr(str);

    printf("str = %s\n",str);



}

//Number of vowels, consonants, words, digits and other
#include<stdio.h>
int main()
{
    char str[100],ch;
    int i,vowel,consonant,digit,word,other;

    printf("Enter a string  : ");
    gets(str);

    i=vowel=consonant=word=digit=other=0;

    while((ch =str[i])!='\0')
    {
        if(ch=='a' || ch =='e' || ch =='i' || ch =='o' || ch =='u'||
           ch=='A' || ch =='E' || ch =='I' || ch =='O' || ch =='U'
           )

           vowel++;


        else if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
            consonant++;

        else if(ch>='0' && ch>='9')

           digit++;
       else if(ch==' ')
            word++;
       else
         other++;

        i++;
    }
    word++;

    printf("Number of  vowels = %d\n",vowel);
    printf("Number of  consonants = %d\n",consonant);
    printf("Number of  digits = %d\n",digit);
    printf("Number of  words = %d\n",word);
    printf("Number of  others = %d\n",other);
}

//Number of capital-small letters, digits
#include<stdio.h>
int main()
{
    char str[50];
    int i,capital,small,digit;
    i=capital=small=digit=0;

    printf("Enter a string : ");
    gets(str);

    while(str[i]!='\0')
    {
        if(str[i]>=65 && str[i]<=90)
            capital++;
        else if(str[i]>=97 && str[i]<=122)
           small++;
        else if(str[i]>=48 && str[i]<=57)
           digit++;



           i++;
    }

    printf("Number of capital letter = %d\n",capital);
    printf("Number of small letter = %d\n",small);
    printf("Number of digit = %d\n",digit);




}
