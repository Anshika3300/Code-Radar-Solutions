#include <stdio.h>
int main(){
    int a,b;
    char operator;
    scanf("%d %d %c",&a,&b,&operator);
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
        case'/':
        result=a/b;
        printf("%d",result);
        default:
        printf("error");
    }
    return 0;
}