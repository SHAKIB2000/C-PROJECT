#include<stdio.h>
int getgcd(int temp1,int temp2)
{
    if(temp2!=0)
    {
        getgcd(temp2,temp1%temp2);
    }
    else
    {
        return temp1;
    }
}
int main()
{
    int num1,num2,gcd;
    scanf("%d %d",&num1,&num2);
    gcd=getgcd(num1,num2);
    printf("GCD = %d\n",gcd);
}
