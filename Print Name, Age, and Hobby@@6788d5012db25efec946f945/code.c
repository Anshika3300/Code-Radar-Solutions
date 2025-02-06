#include<stdio.h>
int main(){
    char name[20];
    int age;
    char hobby[20];
    scanf("%s %d %s",&name,&age,&hobby);
    printf("Name: %s\n",name);
    printf("Age: %d\n",age);
    printf("Hobby: %s",hobby);
    return 0;
}