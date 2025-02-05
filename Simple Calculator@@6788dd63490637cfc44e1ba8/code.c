#include <stdio.h>
int main(){
    double a,b,result;
    char operator;
    scanf("%lf %lf %lf %c",&a,&b,&operator);
    switch(operator){
        case '+':
        result =a+b;
        printf("%d",result);
        break;
        case '-':
        result =a-b;
        printf("%d",result);
        break;
        case '*':
        result=a*b;
        printf("%d",result);
        break;
        case'/':
        result= a/b;
        printf("%d",result);
        default:
        printf("error");
        break;
    }
    return 0;
}