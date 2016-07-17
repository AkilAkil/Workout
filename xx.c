#include<stdio.h>
int main()
{int a[5]={10,2,4,65,20},i,j;
int m,k;
for(j=0;j<1;j++)
{m=a[0];
for(i=0;i<5;i++)
{
if(m<a[i])
{m=a[i];
k=i;}}
a[k]=0;}


printf("%d",m);
}
