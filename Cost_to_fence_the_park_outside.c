#include<stdio.h>
int main()
{
    int l,b,w,c,ar1,ar2,area,cost;
    scanf("%d%d%d%d",&l,&b,&w,&c);
    ar1=l*b;
    l=l+2*w;
    b=b+2*w;
    ar2=l*b;
    area=ar2-ar1;
    cost=c*area;
    printf("%d",cost);
}