#include<stdio.h>
int main()
{
char c='A',n=5;int i,j;
for(i=0;i<3;i++)
{for(j=0;j<n;j++)
{printf("%c",c++);
printf(" ");
}n=n-2;printf("\n");
for(j=0;j<i+1;j++)
printf( " ");

}
printf("\n");
printf(" ");
n=3;
for(i=0;i<2;i++)
{for(j=0;j<n;j++)
{printf("%c ",c++);
}
n=n+2;
printf("\n");
}



}
