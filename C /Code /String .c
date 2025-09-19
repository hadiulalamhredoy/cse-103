//Introduction to String(Problem01)
#include <stdio.h>

int main() {
    
      char s1 [] = "Rakib Ahmed";
 
      printf("s1  = %s\n",s1);

    return 0;
}
//Alternative Way  
#include<stdio.h>  
int main()
{
   
   
    char s1 [6];
    s1[0] = 'L'; 
    s1[1] = 'U'; 
    s1[2] = 'B'; 
    s1[3] = 'A'; 
    s1[4] = 'B'; 
    s1[5] = 'A'; 
    s1[6] ='\0';
    
    
       printf("s1 = %s\n",s1);
    
    
}


//Input and display String(Problem02)
#include <stdio.h>

int main() {
    
      char s1 [] = "Rakib Ahmed";
 
     printf("Enter your Full name : ");
     scanf("%s",s1);
     
     printf("Full name = %s\n",s1);

    return 0;
}

//Display string character-wise(Problem03)
#include <stdio.h>
int main() {
    
      char s1 [] = "Rakib Ahmed";
     int i  =  0;  
     while (s1[i]!='\0')
     {
     
         printf("%c\n",s1[i]);
         i++;
     }

    return 0;
}

//finding length of String using (Problem04)

#include <stdio.h>
#include <string.h>
int main() {
    
    char s1[] = "Rakib";
    
    int len  =  strlen(s1);  
    printf("Length = %d\n",len);


}

// finding length of String without strlen() function (Problem05)
#include<stdio.h> 
int main()
{
    char s1 [] = "Rakib Ahmed";
    int i  = 0 , len =0 ; 
    while(s1[i]!='\0')
    {
         i++;
         len++;  
        
    }
    printf("Length = %d\n",len);
     
}
// copy string using strcpy() (Problem06)
#include<stdio.h> 
#include <string.h>
int main()
{
    char source[] = "C Programming" ;
    char target[20];
    
    strcpy(target,source);  
    
    printf("Source string  = %s\n",source);  
    printf("Target string  = %s\n",target); 
     
}

//concatenation using strcat() (Problem07)
#include<stdio.h> 
#include <string.h>
int main()
{
   char str1[] = "My Name is" ;
  //char str2[] = "Anisul Islam";
  
    strcat(str1,"Anisul Islam");  
    printf("str1= %s\n",str1); 
    
}

// concatenation without strcat() (Problem08)
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

//String compare using strcmp() (Problem09)
#include<stdio.h>
int main()
{
    char str1[] = "Ahmed Rakib";
    char str2[] = "Rakib";

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

//String reverse using strrev() (Problem10)
#include<stdio.h>
int main()
{
   char str1[] = "Rakib Ahmed";

    strrev(str1);

    printf("str1 = %s\n",str1);
}

//String reverse without strrev() (Problem11)
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

// string palindrome  (Problem12)
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
//string swapping (Problem13)
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



