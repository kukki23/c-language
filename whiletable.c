#include <stdio.h>
int main (){
    int num;
    int i=1;
    printf("enter a num to get table ");
    scanf("%d",&num);
    while (i<=10){
    printf("%d * %d = %d\n ", num,i,num*i);
    i++;
    }
}