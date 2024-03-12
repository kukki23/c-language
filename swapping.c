#include<stdio.h>
int main(){
  int num1;
  int num2;
  int temp;
  printf("swapping the value");
  scanf("%d%d%d",&num1,&num2,&temp);
  temp=num1;
  num1=num2;
  num2=temp;

    printf("\nAfter Swapping: num1= %d, num2 = %d", num1, num2);
  
}