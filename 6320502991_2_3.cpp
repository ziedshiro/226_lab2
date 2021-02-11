#include<iostream>
using namespace std;
int main()
{
   int j,i,n[3],a;
   for(i=0;i<3;i++)
        cin>>n[i];
   char x;
   cin>>x;
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
   if(x=='ABC')
    cout<<n[0]<<" "<<n[1]<<" "<<n[2];



}
