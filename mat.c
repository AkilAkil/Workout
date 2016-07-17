#include<stdio.h>
int main()
{
int a[10][10]={{1,2,3}
           ,{4,5,6},
           {7,8,9}};
int i,j,k=1,l;
for(i=0;i<5;i++)
{for(j=0;j<=3-i;j++)
printf(" ");
if(i>=3)
{for(j=1;j<i-1;j++)
printf(" ");}

for(j=0,k=i;k>=0;j++,k--)
{if(a[k][j]==0)
{}
else
printf("%d",a[k][j]);
printf(" ");
}
printf("\n");
}











}

