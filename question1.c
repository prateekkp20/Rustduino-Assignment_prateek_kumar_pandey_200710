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
