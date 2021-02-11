#include<iostream>
using namespace std;
int main()
{
    char n;
    cin>>n;
    int N;
    cin>>N;
    if(n=='A')
    {
        if(N<=200)
            cout<<199;
    }
    else if(n=='B')
    {
        if(N<=400)
            cout<<400;
    }
}
