#include <stdio.h>
int main(){
    char light;
    scanf("%c",&light);
    if(light== 'R'){
        printf("Stop");
    }
    else if(light== 'G'){
        printf("Go");
    }
    else if(light=='Y'){
        printf("Slow Down");
    }
    else{
        printf("Invalid");
    }
    return 0;
}