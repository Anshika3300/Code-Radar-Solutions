#include <stdio.h>
int main(){
    double a,b,result;
    char operator;
    scanf("%lf %lf %lf %c",&a,&b,&result,&operator);
    switch(operator){
        case '+':
        result =a+b;
        printf("%lf",result);
        break;
        case '-':
        result =a-b;
        printf("%lf",result);
        break;
        case '*':
        result=a*b;
        printf("%lf",result);
        break;
        case'/':
        result= a/b;
        printf("%lf",result);
        default:
        printf("error");
        break;
    }
    return 0;
}