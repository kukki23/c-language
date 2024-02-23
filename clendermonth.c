#include<stdio.h>
int 
main () 
 { 
 
int monthCode;
  
 
int temp;
  
 
int centuryCode;
  
 
int year;
  
 
int leapYear;
  
int yy;
  int results;
int yearCode;
 int date; 
 printf("enter date");
 scanf("%d",&date);
 
printf ("enter the month");
  
 
scanf ("%d", &temp);
  
 
switch (temp)
	
	{
	
 
case 1:
	  
 
monthCode = 0;
	  
 
break;
	
 
case 2:
	  
 
monthCode = 3;
	  
 
break;
	
 
case 3:
	  
 
monthCode = 3;
	  
 
break;
	
 
case 4:
	  
 
monthCode = 6;
	  
 
break;
	
 
case 7:
	  
 
monthCode = 1;
	  
 
break;
	
 
case 8:
	  
 
monthCode = 3;
	  
 
break;
	
 
case 9:
	  
 
monthCode = 5;
	  
 
break;
	
 
case 10:
	  
 
monthCode = 0;
	  
 
break;
	
 
case 11:
	  
 
monthCode = 3;
	  
 
break;
	
 
case 12:
	  
 
monthCode = 5;
	  
 
break;
	
 
default:
	  
 
printf ("worng month");
	
 
 
}
  
 
 
printf ("enter the year");
  
 
scanf ("%d", &year);
  
 
if (year >= 1600 && year <= 1699)
	
	{
	  
 
centuryCode = 6;
	
 
}
  
 
  else if (year >= 1700 && year <= 1799)
	
	{
	  
 
centuryCode = 4;
	
 
}
  
 
  else if (year >= 1800 && year <= 1899)
	
	{
	  
 
centuryCode = 2;
	
 
}
  
 
  else if (year >= 1900 && year <= 1999)
	
 
	{
	  
 
centuryCode = 0;
	
 
}
  
 
  else if (year >= 2000 && year <= 2099)
	
	{
	  
 
centuryCode = 6;
	
 
}
  
 
  else if (year >= 2100 && year <= 2199)
	
	{
	  
 
centuryCode = 4;
	
 
}
  
 
  else if (year >= 2200 && year <= 2299)
	
	{
	  
 
centuryCode = 2;
	
 
}
  
 
  else if (year >= 2300 && year <= 2399)
	
	{
	  
 
centuryCode = 0;
	
 
}
  
 
  else
	
	{
	  
 
printf ("wrong centuryCode");
	
}
  
 
 
 
 
 
if ((year % 4 == 0) && (year % 100 != 0))
	
	{
	  
 
leapYear = 1;
	
 
}
  
 
  else
	
	{
	  
 
leapYear = 0;
	
 
}
  
yy = year % 100;
  
 
yearCode = (yy + (yy / 4)) % 7;
  
//printf ("%d %d", yy, yearCode);
results=(yearCode+monthCode+centuryCode+date-leapYear)%7;
//printf("%d",results);
switch(results){
    
    case 0:
    printf("sunday");
    break;
     case 1:
    printf("monday");
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
     
    
    default:
    printf("error");
    
}
printf("%d",results);
}