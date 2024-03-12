#include <stdio.h>
int main(){
    int table[6];
    for( int i=0;i<=5;i++){
        printf("entre the %d number for table :",i+1);
        scanf("%d",&table);
    }for(int j=0;j<=4;j++)
    {
        printf("%d",&table[i]);
        for (int k=0;k<=9;k++)
    }
    }
}
include<stdio.h>
int main(){
    int height;
    int width;
    printf("enter the width of array ");
    scanf("%d",&width);
    printf("enter the height of array");
    scanf("%d",&height);
  int arr[width][height];
    for(int i=0;i<=(sizeof(arr)/4)/height-1;i++){
        for(int f=0;f<=(sizeof(arr)/4)/width-1;f++){
            printf("enter the value of for row %d column %d#:",i,f);
            scanf("%d",&arr[i][f]);
        }
    }
    printf("\n");
}
#include<stdio.h>
int main(){
    int height;
    int width;
    printf("enter the width of array ");
    scanf("%d",&width);
    printf("enter the height of array");
    scanf("%d",&height);
  int arr[width][height];
    for(int i=0;i<=(sizeof(arr)/4)/height-1;i++){
        for(int f=0;f<=(sizeof(arr)/4)/width-1;f++){
            printf("enter the value of for row %d column %d:",i,f);
            scanf("%d",&arr[i][f]);
        }
    }
    printf("\n");


  for(int i=0;i<=(sizeof(arr)/4)/height-1;i++){
      for(int f=0;f<=(sizeof(arr)/4)/width-1;f++){
          printf("%d",arr[i][f]);
      }
    printf("\n");
  }
}#include <stdio.h>
int main(){
int arr[3][3];
  printf("input the 2d array");

  for(int i=0;i<=2;i++){
    
    for (int j=0;j<=2;j++){
     
      printf("enter the value of %d,%d: ",i,j);
      scanf("%d",&arr[i][j]);
    }
  }for(int i=0;i<=2;i++){

    for (int j=0;j<=2;j++){

      printf("%d ",arr[i][j]);}
     
  printf("\n");
}}
array based question....



#include <stdio.h>
int main(){
int arr[3][3];
  
  printf("input the 2d array\n");

  //input data
  for(int i=0;i<=2;i++){
    
    for (int j=0;j<=2;j++){
     
      printf("enter the value of %d,%d: ",i,j);
      scanf("%d",&arr[i][j]);
    }
  }



    //output data
    for(int i=0;i<=2;i++){

      for (int j=0;j<=2;j++){

        printf("%d ",arr[i][j]);}

    printf("\n");
  }


//calculation
  int option;
    int row,col;
  int newData;
  int temp;
  int r2,c2;
  
  printf("\n\nselete option :\n\t1.change\n\t2.delete\n\t3.swap\n");
  scanf("%d",&option);
  switch (option){
    case 1:
    printf("which row and col do you want change: ");
      scanf("%d%d",&row ,&col);
    printf("enter the new data :");
    scanf("%d",&newData);
    arr[row][col]=newData;
          break;
    case 2: 
      printf("which row and col do you want delete: ");
      scanf("%d%d",&row ,&col);
      arr[row][col]=0;
      
      break;
    

     
      
        
      
        case 3:
          printf("Enter the first row and column to be swapping: ");
          scanf("%d%d",&row,&col);
          printf("enter the second row and column to be swapping: ");
          scanf("%d%d",&r2,&c2);
          temp=arr[row][col];
          arr[row][col] = arr[r2][c2];
          arr[r2][c2] = temp ;
          break; 
       
    default:
      printf("invalid option");
  }
  
    
    
  

  
  
  //output data
  for(int i=0;i<=2;i++){

    for (int j=0;j<=2;j++){

      printf("%d ",arr[i][j]);}
     
  printf("\n");
}
}

