 int ft_strlen(char *str)
 {
    int i  =0 ;
    while(str[i])
    {
        i++;
    }
    return i;
 }
char    *ft_strrev(char *str)
{
    int i = 0;
    int size=ft_strlen(str);
    char temp;
    while(i<size/2)
    {
        temp= str[size-i-1];
        str[size-i-1]=str[i];
        str[i]=temp;
        i++;
    }
    return str;
}