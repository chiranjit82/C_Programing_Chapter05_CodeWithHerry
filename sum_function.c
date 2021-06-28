#include<stdio.h>
int sum(int a, int b);

int main() 
{
    int c;
    c = sum(4 , 5);
    printf("The value of sum is %d. \n", c);
    return 0;
}
int sum(int a, int b) {
    int result;
    result = a + b;
    return result;
}