#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    char n;
    cin>>n;
    double N,a;
    int x;
    cin>>N;
    if(n=='A')
    {
        if(N<=200)
            cout<<199;
        else
        {
            x=N-200;
            a=(((N-200-x)*3)/60)*100;
                cout<<199+(x*3)+a;
        }
    }
    else if(n=='B')
    {
        if(N<=400)
            cout<<400;
        else
        {
            x=N-400;
            a=(((N-400-x)*2)/60)*100;
                cout<<299+(x*2)+a;
        }
    }
}
