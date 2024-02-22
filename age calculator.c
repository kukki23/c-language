#include<stdio.h>
int main(){
    int tmonth,tday,tyear;
    int month,day,year;
int cmonth=2,cday=22,cyear=2024;
printf("enter your month");
scanf("%d",&month);
printf("enter your day");
scanf("%d",&day);
printf("enter your year");
scanf("%d",&year);
if (cday>day){
tday=cday-day;}
else{tday=day-cday;}

   if (cmonth>month){
       tmonth=cmonth-month;
   }else{tmonth=month-cmonth;}
tyear=cyear-year;
printf(" you are %d day %d month %d years old ",tday,tmonth,tyear);
}
