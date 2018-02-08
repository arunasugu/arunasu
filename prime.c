#include<stdio.h>
#include<conio.h>
void main()
{
 long int a,b,j,i,c;
 clrscr();
printf("enter the interval");
scanf("%ld%ld",&a,&b);
printf("prime numbers between the interval");
for(j=a+1;j<b;j++)
{  c=0;
  for(i=2;i<j;i++)
  {
    if(j%i<=0)
    {
    c++;
    }
  }
if(c==0)
printf("%d\n",j);
}
getch();
}
