#include<stdio.h>
int reverse(int n)
{
    if(n==0)
        return 0;
    else
        printf("%d ",n);
    return reverse(n-1);
}
int main()
{
    int n;
    scanf("%d",&n);
    reverse(n);
    return 0;
}
