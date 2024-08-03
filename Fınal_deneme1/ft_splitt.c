#include <stdlib.h>
int check_separator(char c)
{
    if (c==9||c==10||c==32||c=='\0')
        return(1);
    return 0;
}
int count_word(char* str)
{
    int i;
    int count=0;

    i = 0;
    while (str[i])
    {
        while (str[i] && check_separator(str[i]))
            i++;
        if(str[i])
            count++;
        while (str[i] && !check_separator(str[i]))
            i++;
    }
    return count;
}
int ft_lenword(char *str)
{
    int i =0;
    while(str[i] && !check_separator(str[i]))
    {
        i++;
    }
    return i;
}
char* ft_word(char* str)
{
    int i = 0;
    int lenword=ft_lenword(str);
    char *word;
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
    char **string;
    string=(char **)malloc((count_word(str)+1)*sizeof(char*));
    while(*str)
    {
        while(*str && check_separator(*str))
            i++;
        if(*str)
        {
            string[i]=ft_word(str);
            i++
        }
        while(*str && !check_separator(*str))
            i++;
    }
    string[i]=0;
    return string;

}