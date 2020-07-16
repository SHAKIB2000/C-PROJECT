#include<stdio.h>
int palindrome(char a[],int len)
{
    int cn=0,i;
    for(i=0;i<len;i++)
    {
        if(a[i]==a[len-i-1])
        {
            cn++;
        }
    }
    return cn;
}
void main()
{
    char a[100];
    int len,cn;
    gets(a);
    len=strlen(a);
    cn=palindrome(a,len);
    if(cn==len)
        printf("PALINDROME\n");
    else
        printf("NOT PALINDROME\n");
}
