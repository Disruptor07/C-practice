#include<stdio.h>
int f(int o,int n);
int main()
{
    int n;
    int o=0;
    scanf("%d",&n);
    printf("%d",f(o,n));
    return 0;
}

int f(int o,int n)
{
    if(n<10)
    {
        return o*10+n;
    }
    o=o*10+n%10;
    f(o,n/10);
}