#include<stdio.h>
#include<string.h>

char str[100];

int main()
{
    scanf("%s",str);
    for(int i = strlen(str)-1;i>=0;i--)
    {
        printf("%c",str[i]);
    }
}
