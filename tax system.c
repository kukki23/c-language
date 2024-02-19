
#include <stdio.h>
void main ()
{ int salary,excess;
    printf("enter the salary");
    scanf("%d",&salary);
    if(salary<=500000)
    {
        printf("on tax");
    }
    else if(salary>500000)
{
  excess=salary-500000;
  printf("your tax is %d",excess/100*18);
}}
