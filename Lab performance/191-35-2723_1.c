#include<stdio.h>
#include<string.h>
int check(char a[])
{
    int len=strlen(a),i;
    if (len==0)
        return 0;
    for(i=0;i<len;i++)
    {
        if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u' ||
           a[i]=='y' ||
           a[i]=='A' || a[i]=='E' || a[i]=='I' || a[i]=='O' || a[i]=='U' ||
           a[i]=='Y')
        {
            return 1;
        }
    }
    if(i==len)
        return -1;
}
int main()
{
    char a[100];
    int ch;
    gets(a);
    ch=check(a);
    if (ch==1)
    {
        printf("legal\n");
    }
    else if(ch==-1)
    {
        printf("illegal\n");
    }
    else
        return 0;

    return 0;
}
