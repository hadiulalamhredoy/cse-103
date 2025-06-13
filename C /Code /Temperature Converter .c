// Centigrade to Farhrenheit
#include <stdio.h>
#include <ctype.h>
int main(){
  float centigrade, fahrenheit;
  
  printf("Enter centigrade = ");
  scanf("%f", &centigrade);

  fahrenheit = (centigrade * 1.8) + 32;

  printf("Equivalent Fahrenheit = %.2f\n",fahrenheit);

  getchar();
}

// Farhrenheit to Centigrade
#include <stdio.h>
#include <ctype.h>
int main(){
  float centigrade, fahrenheit;
  
  printf("Enter fahrenheit = ");
  scanf("%f", &fahrenheit);

  centigrade = (fahrenheit - 32) / 1.8;

  printf("Equivalent centigrade = %.2f\n",centigrade);

  getchar();
}
