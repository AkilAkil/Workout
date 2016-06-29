#include<stdio.h>
int main()
{int a=2700,c=0;
while(c!=5)
{if(a%2==0)
a/=2;
else 
a=3*a+1;
printf("%d--",a);
if(a==1)
break;
}
}
