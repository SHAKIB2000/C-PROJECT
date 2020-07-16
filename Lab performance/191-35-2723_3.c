#include<stdio.h>
int word(char a[])
{
    int count=0,i=0;
    if(a[0]=='\0')
    {
        return 0;
    }
    while(a[i]!='\0')
    {
        if(a[i]==' ')
        {
            count++;
        }
        i++;
    }
    if(a[i-1]!=' ')
        count++;
    return count;
}
int main()
{
    char a[100];
    gets(a);
    printf("There are %d words.\n",word(a));
    return 0;
}
