#include<stdio.h>
int main()
{
    char x;
    int n;
    scanf("%c",&x);
    scanf("%d",&n);
        if(x>='A'&&x<='I')
    {
        if(n%10==5)
            printf("\\");
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
}
