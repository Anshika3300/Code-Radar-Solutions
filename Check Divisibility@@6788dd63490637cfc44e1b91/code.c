#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if(a%5==0 && a%11==0){
        printf("Divisble");
    }
    else{
        printf("Not Divisible");
    }
    return 0;
}