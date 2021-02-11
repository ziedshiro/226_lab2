#include<stdio.h>
int main()
{
   int j,i,n[3],a;
   for(i=0;i<3;i++)
        scanf("%d",&n[i]);
   char x[3];

   for(j=0;j<3;j++)
   for(i=0;i<3;i++)
    {
    a=n[i];
    if(n[i]>n[i+1])
        {
            n[i]=n[i+1];
            n[i+1]=a;
        }
    }
   for(j=0;j<3;j++)
    printf("%d",n[j]);



}
