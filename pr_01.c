#include<stdio.h>
float average(int a, int b, int c);

int main() 
{
    int a, b, c;
    printf("Enter the the value of a: ");
    scanf("%d", &a);
    printf("Enter the the value of b: ");
    scanf("%d", &b);
    printf("Enter the the value of c: ");
    scanf("%d", &c);
    printf("The average of three number %f \n", average(a,b,c));
    return 0;
}

float average(int a, int b, int c){
    float result;
    result = (float)(a + b + c)/3;
    return result;
}