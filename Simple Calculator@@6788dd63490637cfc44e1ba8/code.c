#include<stdio.h>
int main(){
    int a,b,result;
    char operator;
    scanf("%d %d %c");
    if(operator = '+'){
        result=a+b;
        printf("%d",result);
    }
    else if(operator = '-'){
        result=a-b;
        printf("%d",result);
    }
    else if(operator = '*'){
        result= a*b;
        printf("%d",result);
    }
    else if(operator ='/');
    result= a/b;
    printf("%d",result);
    else{
        printf("error");
    }
    return 0;
}