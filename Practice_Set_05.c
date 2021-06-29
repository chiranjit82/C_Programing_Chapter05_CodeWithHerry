// Quick quiz 01:
// #include<stdio.h>
// void goodmorning();
// void goodafternoon();
// void goodnight();

// int main(){ 
//     goodmorning();
//     goodafternoon();
//     goodnight();
//     return 0;
// }
// void goodmorning() {
//     printf("Good Morning! Rubai. \n");
// }
// void goodafternoon() {
//     printf("Good afternoon! Rubai. \n");
// }
// void goodnight() {
//     printf("Good Night! Rubai. \n");
// }

// Quick quiz 02:
// #include<stdio.h>
// #include<math.h>
// float area (int a);

// int main(){ 
//     int side;
//     printf("Enter the side o the square: ");
//     scanf("%d", &side);
//     float ans = area(side);
//     printf("The area of the square is %f", ans);
//     return 0;
// }
// float area (int a) {
//     float ans = pow(a,2);
//     return ans;
// }

// Practice Set 01:
// #include<stdio.h>
// float average(int a, int b, int c);

// int main(){ 
//     int a, b, c;
//     printf("Enter the number 1st: ");
//     scanf("%d", &a);
//     printf("Enter the number 2nd: ");
//     scanf("%d", &b);
//     printf("Enter the number 3rd: ");
//     scanf("%d", &c);
//     float ans = average(a,b,c);
//     printf("The average of the 3 number is %f", ans);
//     return 0;
// }
// float average(int a, int b, int c) {
//     float avg = (a+b+c)/3.0;
//     return avg;
// }

// Practice Set 02:
// #include<stdio.h>
// float converter(int a);

// int main(){ 
//     int cel;
//     printf("Enter the celcious temperature: ");
//     scanf("%d", &cel);
//     float ans = converter(cel);
//     printf("The similar temperature in ferhenhie is %f", ans);
//     return 0;
// }
// float converter(int a) {
//     float fer = (9.0/5.0)*a + 32;
//     return fer;
// }

// Practice Set 03:
// #include<stdio.h>
// float force (int a);

// int main(){ 
//     int mass;
//     printf("Enter the mass of the objet: ");
//     scanf("%d", &mass);
//     float ans = force(mass);
//     printf("The force on the object is %f", ans);
//     return 0;
// }
// float force (int a) {
//     float ans = 9.8 * a;
//     return ans;
// }

// Practice Set 04:
// #include<stdio.h>
// int fibonaccy(int c, int a, int b);
// int fib(int n);

// int main(){ 
//     int num;
//     printf("Enter the number: ");
//     scanf("%d", &num);
//     int a, b;
//     a = 0;
//     b = 1;
//     int ans = fibonaccy(num,a,b);
//     printf("The nth term is %d", ans);
//     int ans1 = fib(num-2);
//     printf("The nth term is %d", ans1);

//     return 0;
// }
// int fibonaccy(int c, int a, int b) {
//     if (c < b) 
//     {
//         return b;
//     }
//     else {
//         int temp = a + b;
//         a = b;
//         b = temp;
//         fibonaccy(c,a,b);
//     }
    
// }
// int fib (int n) {
//     if (n==1 || n==0)
//     {
//         return 1;
//     }
//     else
//     {
//         return (fib (n-1) + fib (n-2));
//     }
    
    
// }

// practice set 05:
// #include<stdio.h>

// int main(){ 
//     int a = 10;
//     printf("%d  %d  %d \n", a, a++, ++a);
//     return 0;
// }

// Practice Set 06:
// #include<stdio.h>
// int sum (int n);

// int main(){ 
//     int n;
//     printf("Enter the number: ");
//     scanf("%d", &n);
//     int ans = sum (n);
//     printf("The sum of %d nt natural number is %d", n, ans);
//     return 0;
// }
// int sum (int n) {
//     if (n == 1)
//     {
//         return 1;
//     }
//     else
//     {
//         return (n + sum(n-1));
//     }
    
// }
// Practice Set 07:
// #include<stdio.h>
// void pattern( int n);

// int main(){ 
//     int n = 3;
//     pattern(n);
//     return 0;
// }
// void pattern(int n) {
//     if (n==1) {
//         printf("*\n");
//         return;
//     }
//     pattern (n-1);
//     for (int i = 0; i < (2*n-1); i++)
//     {
//         printf("*");
//     }
//     printf("\n");
    
// }
