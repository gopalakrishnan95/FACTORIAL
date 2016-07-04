#include<stdio.h>
#include<conio.h>
void main()
{
int a,b=1,count=0,c,d;
clrscr();
printf("\nrange of given number");
scanf("%d",&a);
while(b!=a)
{
if(b==2)
count++;
else if(b>9)
{
c=a%10;
d=a/10;
if(c==2)
count++;
if(d==2)
count++;
}
b++;
}
printf("\nthe inbetween 2 are %d",count);
getch();
}
