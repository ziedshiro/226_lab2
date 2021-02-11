#include<stdio.h>
int main()
{
    char x;
    int n,z;
    scanf("%c",&x);
    scanf("%d",&n);
    z=n;
    if((x>='A'&&x<='Z')&&(n>=1&&n<=31))
    {
                   if(x>='A'&&x<='I')
    {
        if(z%10==5)
            printf("%c",92);
            if(z%2==0)
            {
            printf("{@_@}");
            }
            else
            {
            printf("(^_^)");
            }
        if(z%10==5)
            printf("/");

    }
    else if(x>='J'&&x<='R')
    {
        if(z%10==5)
            printf("\\");
            if(z%2==0)
            {
            printf("{*v*}");
            }
            else
            {
            printf("(*o*)");
            }
        if(z%10==5)
            printf("/");
    }
    else if(x>='S'&&x<='Z')
    {
        if(z%10==5)
            printf("\\");
            if(z%2==0)
            {
            printf("{x_x}");
            }
            else
            {
            printf("(T_T)");
            }
        if(z%10==5)
            printf("/");
    }
    }



}
