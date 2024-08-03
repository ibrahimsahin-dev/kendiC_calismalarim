char *ft_rev_print (char *str)
{
    int i = 0;
    int size=ft_strlen(str);
    char temp;
    while(str[i] && (i<size/2))
    {
        temp=str[size - 1-i];
        str[size - 1-i]=size[i];
        str[i]=temp;
    }

    return (str);
}
