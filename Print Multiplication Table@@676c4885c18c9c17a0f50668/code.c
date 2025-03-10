#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=n;i<=n*10;i+n){
        printf("%d x %d = %d\n ",n,i,n*i);
    }
    
    return 0;
}