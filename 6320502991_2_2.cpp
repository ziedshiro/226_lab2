#include<iostream>
using namespace std;
int main()
{
    char n;
    cin>>n;
    int N,x;
    cin>>N;
    if(n=='A')
    {
        if(N<=200)
            cout<<199;
        else
        {
            x-=200;
            cout<<199+(x*3);
        }
    }
    else if(n=='B')
    {
        if(N<=400)
            cout<<400;
        else
        {
            x-=400;
            cout<<199+(x*3);
        }
    }
}
