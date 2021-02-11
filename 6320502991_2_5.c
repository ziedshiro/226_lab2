#include<stdio.h>
int main()
{
    int d,m;
    scanf("%d %d",&d,&m);
    if((d>=1&&d<=7)&&(m>=1&&m<=12))
    {
       switch(m)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 11:printf("%d",d+(31%7));
    }
    switch(m)
    case 2:printf("%d",d);
    switch(m)
    {
    case 4:
    case 6:
    case 9:
    case 11:printf("%d",d+(30%7));
    }
    }




}
