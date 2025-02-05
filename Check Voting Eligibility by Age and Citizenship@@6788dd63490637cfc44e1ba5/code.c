#include <stdio.h>
int main(){
    int age;
    int citizenstatus;
    scanf("%d %d",&age,&citizenstatus);
    if(age>=18 ){
        printf("Eligible");
    }
    else{
        printf("Not Eligible");
    }
    return 0;
}