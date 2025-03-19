#include<stdio.h>
int main(){
    int n;
    int no=1;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int k=1;k<=n-i;k++){
            printf(" ");
        }
        int a=1;
        for(int j=1;j<=no;j++){
            int d=a+64;
            char ch=(char)d;
            printf("%c",ch);
            a++;
        }
        printf("\n");
        no+=2;
    }
    return0;
}