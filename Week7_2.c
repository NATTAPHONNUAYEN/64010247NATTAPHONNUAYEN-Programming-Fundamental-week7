
#include<stdio.h>

char str[100];
int cnt;

char *p;
int main()
{
    p = str;

    scanf("%s",str);

    while(*p != '\0')
    {
        p++;
        cnt++;
    }
    cnt--;
    for(int i=cnt;i>=0;i--)
    {
        printf("%c",str[i]);
    }

}
