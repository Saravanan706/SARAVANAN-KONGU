#include<stdio.h>
void main()
{
int a,b=0;
printf("\n Enter the number");
scanf("%d",&a);
if(a!=0)
{
a=a/10;
++b;
}
printf("\n No of digit=%d",b);
}
