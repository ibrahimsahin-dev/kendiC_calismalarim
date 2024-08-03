#include <stdio.h>
#include <unistd.h>
int ft_strlen(char *str)
{
    int i = 0;
    while(str[i])
        i++;
    return (i);
}
char *ft_rev_print (char *str)
{
    char temp;
    int i = 0;
    int size=ft_strlen(str);
    while(i<size/2)
    {
        temp=str[size-i-1];
        str[size-i-1]=str[i];
        str[i]=temp;
        i++;
    }
    i=0;
    while(i<size)
    {
        write(1, &str[i], 1);
        i++;
    }
    write(1, "\n", 1);
    return str;
}
int main()
{
    char *x = "abcdef";
   ft_rev_print(x);

    return 0;
}
