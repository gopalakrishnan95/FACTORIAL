#include<stdio.h>
#include<conio.h>
void main()
{
int a[10][10];
int i,j,b,sum,flag=0;
clrscr();
printf("\n enter the input:");
for(i=0;i<9;i++)
{
for(j=0;j<9;j++)
{
scanf("%d",&b);
}
}
if(b>0 && b<=9)
a[i][j]=b;

else
{
printf("invalid");
}

for(i=0;i<9;i++)
{
sum=0;
for(j=0;j<9;j++)
sum=sum+a[i][j];
if(sum!=45)
flag=1;
}
if(flag==0)
{
for(i=0;i<9;i++)
{
sum=0;
for(i=0;i<9;i++)
sum=sum+a[i][j];
if(sum!=45)
flag=1;
} }
if(flag==0)
{
printf("\n valid");
}
else
{
printf("\n invalid");
}
getch();
}
