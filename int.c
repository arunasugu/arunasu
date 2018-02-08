
#include<stdio.h>
#include<conio.h>
int main()
{
  int r,a,b,i,t,c;
  clrscr();
  printf("Enter the interval");
  scanf("%d%d",&a,&b);
  printf("tne armstrong number between the intervals are");
  for(i=a+1;i<b;i++)
  {
    t=i;
    c=0;
    while(t!=0)
      {
       r=t%10;
       c=c+(r*r*r);
       t=t/10;
      }
    if(i==c)
    printf("%d",i);
  }
 return 0;
 }
 
