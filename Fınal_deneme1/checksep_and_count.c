#include <stdlib.h>
int checkseparators(char c)
{
    int i;

    i = 0;
    if(c==9||c==10 || c=='\0'||c==32)
        return 1;
    return 0;
}
int count_strings(char* str)
{
    int count=0;
    int i =0;

    while(str[i]){
    while(str[i] && check_separator(str[i]))
        i++;
    if(str[i])
        count++;
    while(str[i]&& !check_separator(str[i]))
        i++;
    }
    return count;
}
int ft_uzunluk(char *str)
{
    int i = 0;
    while(str[i] && !check_separator(str[i]))
        i++;
    return i;
}
char *ft_word(char* str)
{
    int lenword;
    int i = 0;
    char *word;
    lenword=ft_uzunluk(str);
    word=(char *)malloc((lenword+1)*sizeof(char));
    while(i<lenword)
    {
        word[i]=str[i];
        i++;
    }
    word[i]='\0';
    return word;
}

char	**ft_split(char *str)
{
    char **string;
    int i =0 ;
    string=(char**)malloc((count_strings(str)+1)* sizeof(char *));
    while(*str)
    {
        while(*str && check_separator(*str))
            str++;
        if(*str)
        {
            string[i]=ft_word(str);
            i++;
        } 
        while(*str && !check_separator(*str))
            str++;
    }
    string[i]='\0';
    return string;
}