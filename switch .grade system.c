#include <stdio.h>
int
main ()
{
  int math, science, sst, computer, history;
  int grade;
  int percentage;
  int marks;
  printf ("enter the marks in maths");
  scanf ("%d", &math);
  printf ("enter the marks in science");
  scanf ("%d", &science);
  printf ("enter the marks in sst");
  scanf ("%d", &sst);
  printf ("enter the marks in history");
  scanf ("%d", &history);
  printf ("enter the marks of computer");
  scanf ("%d", &computer);
  marks = math + science + sst + computer + history;
  percentage = marks * 100 / 5000;
  printf ("%d\n", percentage);

  switch (percentage)
	{
	case 10:
	case 9:
	  printf ("your grade is A");
	  break;
	case 8:
	  printf ("your grade is B");
	  break;
	case 7:
	  printf ("your garde is C");
	  break;
	case 6:
	  printf ("your grade is D");
	  break;

	default:
	  printf ("fail");
	}

}
