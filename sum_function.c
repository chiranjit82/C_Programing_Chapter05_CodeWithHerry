#include<stdio.h>
int sum(int a, int b);  // a & b are parameter of the function protocall

int main() 
{
    int c;
    c = sum(4,5); // arguments of the function call
    printf("The value of sum is %d. \n", c);
    return 0;
}
// Function Defination
int sum(int a, int b) {
    int result;
    result = a + b;
    return result;
}