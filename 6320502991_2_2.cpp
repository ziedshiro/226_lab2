#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    char n;
    cin>>n;
    double N,x,a;
    cin>>N;
    if(n=='A')
    {
        if(N<=200)
            cout<<199;
        else
        {
            x=N-200;
            a=199+ceil(x*3);
                cout<<double(a);
        }
    }
    else if(n=='B')
    {
        if(N<=400)
            cout<<400;
        else
        {
            x=N-400;
            a=299+ceil(x*2);
                cout<<double(a);
        }
    }
}
