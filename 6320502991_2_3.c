#include<stdio.h>
#include<string.h>
int main()
{
   int j,i,n[3],a;
   for(i=0;i<3;i++)
        scanf("%d",&n[i]);
   char x[3];
   scanf("%s",x);
   for(j=0;j<3;j++)
   {
       for(i=0;i<3;i++)
    {
    a=n[i];
    if(n[i]>n[i+1])
        {
            n[i]=n[i+1];
            n[i+1]=a;
        }
    }
   }
    if(x[0]=='A')
        printf("%d ",n[0]);
    else if(x[0]=='B')
        printf("%d ",n[1]);
    else if(x[0]=='C')
        printf("%d ",n[2]);
    if(x[1]=='A')
        printf("%d ",n[0]);
    else if(x[1]=='B')
        printf("%d ",n[1]);
    else if(x[1]=='C')
        printf("%d ",n[2]);
    if(x[2]=='A')
        printf("%d",n[0]);
    else if(x[2]=='B')
        printf("%d",n[1]);
    else if(x[2]=='C')
        printf("%d",n[2]);



}
