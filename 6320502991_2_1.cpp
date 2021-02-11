#include<iostream>
using namespace std;
int main()
{
    int a,b,c,x;
    cin>>a;
       cin>>b;
          cin>>c;
          x=a+b+c;
          if((a>=0&&a<=30)&&(b>=0&&b<=30)&&(c>=0&&c<=40))
          {
              if(x>=80&&x<=100)
                cout<<"A";
              else if(x>=75&&x<=79)
                cout<<"B+";
              else if(x>=70&&x<=74)
                cout<<"B";
              else if(x>=65&&x<=69)
                cout<<"C+";
                else if(x>=60&&x<=64)
                cout<<"C";
                else if(x>=55&&x<=59)
                cout<<"D+";
                else if(x>=50&&x<=54)
                cout<<"D";
                else if(x>=0&&x<=49)
                cout<<"F";
          }



}
