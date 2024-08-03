#include <unistd.h>
#include <stdlib.h>
int atla(char s)
{
    int i = 0;
    if(s==32 ||s==9||s==10||s=='\0')
        return 1;
    return 0;
}
int count_word(char *str)
{
    int i = 0;
    int count= 0;
    while(str[i])
    {
        while(str[i]&& atla(str[i]))
            i++;
        if(str[i])
            count++;
        while(str[i]&& !atla(str[i]))
            i++;
    }
    return count;
}
int ft_wordlen(char *str)
{
    int i = 0;
    while(str[i] && !atla(str[i]))
    {
        i++;
    }
    return i;
}
char *ft_word(char *str)
{
    int i = 0;
    int lenword;
    char *word;
    lenword=ft_wordlen(str);
    word=(char*)malloc((lenword+1)*sizeof(char));
    while(i<lenword)
    {
        word[i]=str[i];
        i++;
    }
    word[i]='\0';
    return word;
}
char    **ft_split(char *str)
{
    char**  string;
    int i = 0;
    string=(char**)malloc((count_word(str)+1)*sizeof(char *));
        while(*str && atla(*str))
            str++;
        if(*str)
        {
            string[i]=ft_word(str);
            i++;
        }
        while(*str && !atla(*str))
            str++;
    }
    string[i]=NULL;
    return string;
}