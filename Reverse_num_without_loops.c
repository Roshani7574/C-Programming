#include<stdio.h>
int main()
{
  int n,rev;
int d1,d2,d3,d4;
printf("\n Enter the any four digit number :");
scanf("%d",&n);
d1=n%10;
n=n/10;
d2=n%10;
n=n/10;
d3=n%10;
n=n/10;
d4=n%10;
rev = d1*1000 + d2*100 + d3*10 + d4;
printf("\n The reverse of the given number is %d:",rev);
}
