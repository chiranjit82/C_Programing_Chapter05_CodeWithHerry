#include<stdio.h>
int factorial(int a);
int main() 
{
    int i = 5;
    printf("The factorial of %d is %d .\n ", i, factorial(i));
    return 0;
}

int factorial(int a) {
    if(a == 1 || a == 0){
        return 1;
    }
    else {
        return (a * factorial(a-1));
    }
}