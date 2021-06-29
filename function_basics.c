#include<stdio.h>
void display();     // Function protocall

int main() 
{
    printf("Intializing display function. \n");
    display();  // function call.
    printf("Display function finished its work. \n");
    return 0;
}

// Function Defination.
void display() {
    printf("This is a display Function.\n");
}