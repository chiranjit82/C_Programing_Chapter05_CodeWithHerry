#include<stdio.h>
// Function protocall.
void GoodMorning();
void GoodAfternoon();
void GoodNight();

int main() 
{
    GoodMorning();      // Function Call
    GoodAfternoon();    // Function Call
    GoodNight();        // Function Call
    return 0;
}
// Function defination
void GoodMorning() {
    printf("Good Morning Rubai. \n");
}
// Function Defination
void GoodAfternoon() {
    printf("Good After Noon Rubai. \n");
}
// Function Defination
void GoodNight() {
    printf("Good Night Rubai. \n");
}