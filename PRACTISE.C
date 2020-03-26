//c proggram for reverse of an array
#include<stdio.h>
#include<conio.h>
int main()
{
int a[20],n,i,j;
printf("Enter the size of the array:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
for(j=0;j<i;j++)
{
if(a[i] == a[j])
{
break;
}
}
if(i==j)
{
printf("%d",a[i]);
}
}
return 0;
}
