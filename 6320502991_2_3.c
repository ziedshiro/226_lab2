#include<stdio.h>
int main()
{
   int j,i,n[3],a,b,c,mx,mn,md;
   for(i=0;i<3;i++)
        scanf("%d",&n[i]);
   char x[3];
   scanf("%s",x);
   mx=n[0];
   for(i=0;i<3;i++)
    if(n[i]>mx)
    {
        mx=n[i];
        a=i;
    }
    mn=n[0];
    for(i=0;i<3;i++)
        if(n[i]<mn)
    {
        mn=n[i];
        b=i;
    }
      if(a==0&&b==1)
            c=2;
      else if(a==0&&b==2)
        c=1;
      else if(a==1&&b==0)
        c=2;
      else if(a==1&&b==2)
        c=0;
      else if(a==2&&b==0)
        c=1;
      else if(a==2&&b==1)
        c=0;
        md=n[c];
    if(x[0]=='A')
        printf("%d ",mn);
    else if(x[0]=='B')
        printf("%d ",md);
    else if(x[0]=='C')
        printf("%d ",mx);
    if(x[1]=='A')
        printf("%d ",mn);
    else if(x[1]=='B')
        printf("%d ",md);
    else if(x[1]=='C')
        printf("%d ",mx);
    if(x[2]=='A')
        printf("%d",mn);
    else if(x[2]=='B')
        printf("%d",md);
    else if(x[2]=='C')
        printf("%d",mx);



}
