#include<stdio.h>
int fib(int n);

int main() 
{
    int num;
    printf("Enter the length of the febonnci series: ");
    scanf("%d", &num);
    printf("The nth order value is : %d \n", fib(num));
    return 0;
}

int fib(int n){
    printf("%d", n);
    int first = 0, second = 1;
    int count = 2;
    while ((count + 1) != n)
    {
        if(count < n){
        count++;
        int sum = first + second;
        first = second;
        second = sum;
        }
    }
    int s = first + second;
    return s;
}