#include <stdio.h>
int main(){
    char ch;
    scanf("%c",&ch);
    if(uppercase(ch)){
        printf("Uppercase");
    }
    else if(Lowercase(ch)){
        printf("Lowercase");
    }
    else{
        printf("Not an alphabet");
    }
    return 0;
}
