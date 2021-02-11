#include<iostream>
#include<cmath>
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
            x=N-200;
            if(x%100==0)
            cout<<199+(x*3);
            else
                cout<<199+(x*3)+1;
        }
    }
    else if(n=='B')
    {
        if(N<=400)
            cout<<400;
        else
        {
            x=N-400;
            if(x%100==0)
            cout<<299+(x*2);
            else
                cout<<299+(x*2)+1;
        }
    }
}
