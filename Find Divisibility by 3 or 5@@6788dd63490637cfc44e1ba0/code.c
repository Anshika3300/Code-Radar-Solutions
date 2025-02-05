#include <stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    if(a%3==0 && b%3==0){
        printf("Divisble by Both");
    }
    if else(a%3==0){
        printf("Divisble by 3");
    }
    if else(a%5==0){
        printf("Divisble by 5");
    }
    else{
        printf("Not Divisble");
    }

    return 0;
}