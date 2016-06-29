#include<stdio.h>
/*
void main()
{
int s;
scanf("%d",&s);
switch (s) while (0) {
    case 0:
        printf("zero\n");
        continue;
    case 1:
        printf("one\n");
        continue;
    default:
        printf("something else\n");
        continue;
    }
}*/
int main()
{int j=5,i,z,k=1,n;
char a[7]={'p','r','o','g','r','a','m'};
for(i=0;i<4;i++)
//for(j=6;j>0;j--)
{
for(z=0;z<i;z++)
printf(" ");
printf("%c",a[i]);
for(z=0;z<j;z++)
printf(" ");

j=j-2;
//printf("%d",j);
if(j!=-3)
printf("%c",a[i]);
printf("\n");}
n=2;
//printf("%d",j);
for(z=0;z<3;z++)
{
for(j=0;j<n;j++)
printf(" ");
n=n-1;
printf("%c",a[i]);

for(j=0;j<k;j++)
printf(" ");
k=k+2;
printf("%c",a[i]);
printf("\n");i++;
}









}
