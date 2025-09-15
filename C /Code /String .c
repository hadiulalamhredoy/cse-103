//Introduction to String
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


//Input and display String
#include <stdio.h>

int main() {
    
      char s1 [] = "Rakib Ahmed";
 
     printf("Enter your Full name : ");
     scanf("%s",s1);
     
     printf("Full name = %s\n",s1);

    return 0;
}

//Display string character-wise
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

//finding length of String using

#include <stdio.h>
#include <string.h>
int main() {
    
    char s1[] = "Rakib";
    
    int len  =  strlen(s1);  
    printf("Length = %d\n",len);


}

// finding length of String without strlen() function
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
// copy string using strcpy()
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

//concatenation using strcat()
#include<stdio.h> 
#include <string.h>
int main()
{
   char str1[] = "My Name is" ;
  //char str2[] = "Anisul Islam";
  
    strcat(str1,"Anisul Islam");  
    printf("str1= %s\n",str1); 
    
}
