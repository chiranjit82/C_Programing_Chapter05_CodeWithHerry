#include<stdio.h>
float ferhen(int c);

int main() 
{
    int cel;
    printf("Enter the celcius Temperature: ");
    scanf("%d", &cel);
    printf("Ferhenhite value is %f \n", ferhen(cel));
    return 0;
}

float ferhen(int c){
    float result = (9.0/5.0)*c +32;
    return result;
}