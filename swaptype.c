#include<stdio.h>
int main(){
    char str[10];
    char *pstr;
    pstr=str;
    scanf("%s",str);
    while (*pstr!= '\0')
    {
        if(*pstr >= 65 && *pstr <=90)
        {
            *pstr = *pstr + 32;
            printf("%c",*pstr);
        }
        else if(*pstr >= 97 && *pstr <= 122)
        {
            *pstr = *pstr - 32;
            printf("%c",*pstr);
        }
        pstr=pstr+1;
    }
    printf("\n");
}
