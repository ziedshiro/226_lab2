#include<stdio.h>
int main()
{
    int i=0,n,x,N[8]={},k;
    scanf("%d",&n);
    do
    {
        x=n%10;
        N[i]=x;
        n/=10;
        i++;
    }while(n>0);
    k=i;
    for(i=k-1;i>=0;i--)
        printf("%d",N[i]);
}
