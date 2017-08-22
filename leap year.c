#include<stdio.h>
void main()
{
int a;
printf("\n Enter the year");
scanf("%d",&a)
if(a%4==0)
{
  if(a%100==0)
  {
  if(a%400=0)
  printf("\n Leap year");
  else
  printf("\n Not a leap year);
  }
  else
  printf("\n Not a leap year);
  }
  else 
  printf("\n Not a leap year);
  }
