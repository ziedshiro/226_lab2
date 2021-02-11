#include<stdio.h>
int main()
{
    char x;
    int n;
    scanf("%c",&x);
    scanf("%d",&n);
    if((x>='A'&&x<='Z')&&(n>=1&&n<=31))
    {
                   if(x>='A'&&x<='I')
    {
        if(n%10==5)
            printf("%c",92);
            if(n%2==0)
            {
            printf("{@_@}");
            }
            else
            {
            printf("(^_^)");
            }
        if(n%10==5)
            printf("/");

    }
    else if(x>='J'&&x<='R')
    {
        if(n%10==5)
            printf("\\");
            if(n%2==0)
            {
            printf("{*v*}");
            }
            else
            {
            printf("(*o*)");
            }
        if(n%10==5)
            printf("/");
    }
    else if(x>='S'&&x<='Z')
    {
        if(n%10==5)
            printf("\\");
            if(n%2==0)
            {
            printf("{x_x}");
            }
            else
            {
            printf("(T_T)");
            }
        if(n%10==5)
            printf("/");
    }
    }



}
