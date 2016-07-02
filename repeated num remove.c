#include<stdio.h>
#include<conio.h>
void main()
{
 int n,i,j,count=0;
 int a[20];
 clrscr();
 n=4;
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
 }
 for(i=0;i<n;i++)
 {
  count=1;
  for(j=0;j<n;j++)
  {
   if(a[i]==a[j]&&(i!=j))
   {
    count++;
   }
  }
  //printf("a %d, count %d",a[i],count);
  if(count==1)
  {
   printf("\n%d ",a[i]);
  }
 }
 getch();
}
