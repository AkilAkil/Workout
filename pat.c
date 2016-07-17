#include<stdio.h>
int main()
{
int n=5,k,j,i,m,l;m=n;
for(i=0;i<=(2*n-1)/2;i++)
{l=i;printf("\n%d",n);m=n;
for(j=0;j<i;j++)
{m--;printf("\t%d",m);
}
for(k=0;k<(2*n-1)/2-i;k++)
{printf("\t%d",m);}

//printf("\t%d",m);}l=i;

for(k=0;k<(2*n-1)/2-i;k++)
{
printf("\t%d",m);}
for(j=0;j<i;j++)
{m++;printf("\t%d",m);
}

}
}
