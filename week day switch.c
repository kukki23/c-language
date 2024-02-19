nt a;
    printf("enter the value ");
    scanf("%d",&a);
    switch(a){
        case 5:
        printf("five");
        break;
        case 2:
        printf("two");
        case 6:
        printf("six");
        break;
        default:
        printf("no case");
        break;
    }
}
#include <stdio.h>
void main(){
    int weeks;
    printf("enter the date and weeks");
    scanf("%d",&weeks);
    switch(weeks){
case 1:
printf("monday\n");
break;
case 2:
printf("tuesday");
break;
case 3:
printf("wednesday");
break;
case 4:
printf("thursday");
break;
case 5:
printf("friday");
break;
case 6:
printf("saturday");
break;
case 7:
printf("sunday");
break;
default:
printf("no weeks");
    }
}