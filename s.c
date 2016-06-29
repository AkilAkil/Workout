#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define pi 3.14
double fact(int n)
{double y=1;int x;
for(x=1;x<=n;x++)
y=y*x;
return y;
}
double powr(float i,int j)
{int z;double v=1;
for(z=1;z<=j;z++)
v=v*i;

return v;

}



int main()
{
int d,j;float i=(pi/180);double a=0;int c=1;
scanf("%d",&d);
i=i*d;
for(j=1;j<100;c=c<1?1:-1,j=j+2)
{
a=a+c*(powr(i,j)/fact(j));




}
printf("%f",a);


}
