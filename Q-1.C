#include <stdio.h>

 int main() 
{
    float celsius, fahrenheit;    
    
    printf("Enter the temperature in Celsius : ");
    scanf("%f", &celsius);

    fahrenheit = (9.0/5.0) * celsius + 32;

    printf("the tempereture in Fahrenheit : %.1f\n", fahrenheit);
   
return 0;
}