#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char *commanstring(char shortstring[], char longstring[])
{
    int i, j;
    char *substring=malloc(256);
    if(strstr(longstring, shortstring)!=NULL)              //如果……，那么返回shortstring
        return shortstring; 
    for(i=strlen(shortstring)-1;i>0; i--)                 //否则，开始循环计算
    {
        for(j=0; j<=strlen(shortstring)-i; j++)
        {
            memcpy(substring, &shortstring[j], i);
            substring[i]='/0';
            if(strstr(longstring, substring)!=NULL)
            return substring;
        }
    }
    return NULL;
}

main()
{
    char *str1=malloc(256);
    char *str2=malloc(256);
    char *comman=NULL;
    gets(str1);
    gets(str2);
    if(strlen(str1)>strlen(str2))                         //将短的字符串放前面
        comman=commanstring(str2, str1);
    else
        comman=commanstring(str1, str2);
    printf("the longest comman string is: %s/n", comman);
}