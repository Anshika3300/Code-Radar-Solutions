#include <stdio.h>
int main(){
    char ch;
    scanf("%ch",&ch);
    if(ch>='A' && ch<='Z'){
    printf("Uppercase");
    }
    if(ch>='a' && ch<= 'z'){
        printf("Lowercase");
    }
    return 0;
}