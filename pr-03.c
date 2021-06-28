#include<stdio.h>
float force(float m);

int main() 
{
    float mass;
    printf("Enter the mass in kgs: ");
    scanf("%f", &mass);
    printf("The force of the object is : %.2f \n", force(mass));
    return 0;
}

float force(float m){
    float result;
    result = m * 9.8;
    return result;
}