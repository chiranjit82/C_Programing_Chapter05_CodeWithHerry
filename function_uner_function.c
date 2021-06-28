#include<stdio.h>
// Function protocall.
void GoodMorning();
void GoodAfternoon();
void GoodNight();

int main() 
{
    GoodMorning();    
    return 0;
}
void GoodMorning() {
    printf("Good Morning Rubai. \n");
     GoodAfternoon();
}
void GoodAfternoon() {
    printf("Good After Noon Rubai. \n");
    GoodNight();
}
void GoodNight() {
    printf("Good Night Rubai. \n");
}