#include<stdio.h>
int multiply(int a, int b){
    return a*b;
}
int add(int a, int b){
    return a+b;
}
int subs(int a, int b){
    return a-b;
}
int div(int a, int b){
    return a/b;
}
int main(){
    int a,b,c;
    char x,y;
    printf("Enter an expression:");
    scanf("%d %c %d %c %d",&a,&x,&b,&y,&c);
    if(a>1000||b>1000||c>1000){
        printf("Incorrect input: numbers cannot exceed 1000. Program terminated, please try again.");
        return 0;
    }
    if(x!='/'&&x!='*'&&x!='+'&&x!='-'){
        printf("Incorrect input: Program terminated, please try again.");
        return 0;
    }
    if(y!='/'&&y!='*'&&y!='+'&&y!='-'){
        printf("Incorrect input: Program terminated, please try again.");
        return 0;
    }
    printf("Result: ");
    if(x=='/'){
        a=div(a,b);
        if(y=='/')printf("%d",div(a,c));
        else if(y=='*')printf("%d",multiply(a,c));
        else if(y=='+')printf("%d",add(a,c));
        else if(y=='-')printf("%d",subs(a,c));
        return 0;
    }
    else if(y=='/'){
        c=div(b,c);
        if(x=='*')printf("%d",multiply(a,c));
        else if(x=='+')printf("%d",add(a,c));
        else if(x=='-')printf("%d",subs(a,c));
        return 0;
    }
    else if(x=='*'){
        a=multiply(a,b);
        if(y=='*')printf("%d",multiply(a,c));
        else if(y=='+')printf("%d",add(a,c));
        else if(y=='-')printf("%d",subs(a,c));
        return 0;
    }
    
    else if(y=='*'){
        c=multiply(b,c);
        if(x=='+')printf("%d",add(a,c));
        else if(x=='-')printf("%d",subs(a,c));
        return 0;
    }
    else if(x=='+'&&y=='+')printf("%d",add(a,add(b,c)));
    else if(x=='+'&&y=='-')printf("%d",add(a,subs(b,c)));
    else if(x=='-'&&y=='+')printf("%d",add(subs(a,b),c));
    else if(x=='-'&&y=='-')printf("%d",subs(subs(a,b),c));
    return 0;
}
