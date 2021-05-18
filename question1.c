// Write a C/C++ program that performs the following actions:

// Prompts the user to input their name. Prints a greeting to the user, calling them by their name. Prompts the user to input the year they were born. Calculates and prints the user's age.
#include<stdio.h>
int main(){
    char name[100];
    printf("What is your name?");
    scanf("%s",name);
    printf("Hello, %s! \n",name);
    printf("What year were you born?");
    int y;
    scanf("%d",&y);
    printf("Congratulations, you are %d old!",2020-y);
    return 0;
}
