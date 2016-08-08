#include<stdio.h>
#include<conio.h>
void main()
{
 int a[20];
 int n1,i,j=0,min,s;
 clrscr();
 printf("Enter number of elements\n");
 scanf("%d",&n1);
 printf("Enter the elements:\n");
 for(i=0;i<n1;i++)
 {
  scanf("%d",&a[i]);
 }
 min=a[0];
 for(i=1;i<n1;i++)
 {
  if(min>a[i])
  {
   min=a[i];
   j=i;
  }
 }
 s=a[n1-j-1];
 for(i=1;i<n1;i++)
 {
  if(s>a[i] && j!=i)
  s=a[i];
 }
 printf("Second smallest element:%d",s);
 getch();
}
 
