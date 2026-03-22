#include<stdio.h>
void f(int n);
int main()
{
    int n;
    scanf("%d",&n);
    f(n);
    return 0;
}

void f(int n)
{
    if(n<10)
    {
        printf("%d",n);
        return;
    }
    printf("%d",n%10); 
    f(n/10);
}