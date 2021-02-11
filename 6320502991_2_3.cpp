#include<iostream>
using namespace std;
int main()
{
   int j,i,n[3],a;
   for(i=0;i<3;i++)
        cin>>n[i];
   char x;
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
   if(x=="ABC")
   {
    cout<<n[0]<<" "<<n[1]<<" "<<n[2];
   }
   else if(x=="ACB")
    {
    cout<<n[0]<<" "<<n[2]<<" "<<n[1];
    }
    else if(x=="BAC")
    {
    cout<<n[1]<<" "<<n[0]<<" "<<n[2];
    }
    else if(x=="BCA")
    {
    cout<<n[1]<<" "<<n[2]<<" "<<n[0];
    }
    else if(x=="CAB")
    {
    cout<<n[2]<<" "<<n[0]<<" "<<n[1];
    }
    else if(x=="CBA")
    {
    cout<<n[2]<<" "<<n[1]<<" "<<n[0];
    }


}
