#include<stdio.h>
// Function protocall.
void GoodMorning();
void GoodAfternoon();
void GoodNight();

int main() 
{
    GoodMorning();    // Function Call
    return 0;
}
// Function Defination
void GoodMorning() {
    printf("Good Morning Rubai. \n");
     GoodAfternoon();   // Function Call
}
// Function Defination
void GoodAfternoon() {
    printf("Good After Noon Rubai. \n");
    GoodNight();    // Function Call
}
// Function Defination
void GoodNight() {
    printf("Good Night Rubai. \n");
}