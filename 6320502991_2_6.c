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
    {
        if(N[i]==0)
            printf("Zero");
        else if(N[i]==1)
            printf("One");
        else if(N[i]==2)
            printf("Two");
            else if(N[i]==3)
            printf("Three");
            else if(N[i]==4)
            printf("Four");
            else if(N[i]==5)
            printf("Five");
            else if(N[i]==6)
            printf("Six");
            else if(N[i]==7)
            printf("Seven");
            else if(N[i]==8)
            printf("Eight");
            else if(N[i]==9)
            printf("Nine");
            if(i!=0)
        printf("-");
    }

}
