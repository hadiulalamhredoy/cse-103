#include<stdio.h>  
int main()
{

    char a[101],b[101];
    scanf("%s %s",a,b);
    strcat(b,a);  //b +a

    printf("%s %s",a,b);
     
}