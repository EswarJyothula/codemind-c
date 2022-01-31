#include<stdio.h>
int main()
{
    int n,i=1;
    scanf("%d",&n);
    if(n>=1&&n<=10000){
        label:
        printf("%d",i);
        printf(" ");
        i++;
        if(i<=n){
            goto label;
        }
    
    }
    else{
        printf("The Number Series is Not Possible Print");
    }
    
}