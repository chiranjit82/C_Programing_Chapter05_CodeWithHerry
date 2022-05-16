#include<stdio.h>
int factorial(int a);       // Function Protocall
int main() 
{
    int i = 5;
    printf("The factorial of %d is %d .\n ", i, factorial(i));  // Function Call
    return 0;
}
// Function Defination
int factorial(int a) {
    if(a == 1 || a == 0){
        return 1;
    }
    else {
        return (a * factorial(a-1));
    }
}