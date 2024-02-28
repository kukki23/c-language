#include<stdio.h>
int main(){
  char pattern='*';
  int input;
  scanf(" %d",&input);
  for(int i=1;i<=input;i++){
    for(int j=1;j<=i;j++){
    
    printf( "  %c ", pattern);
  }
    printf("\n");
}
}
