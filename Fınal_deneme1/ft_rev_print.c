 int ft_strlen(char *str)
 {
    int i  =0 ;
    while(str[i])
    {
        i++;
    }
    return i;
 }
 char *ft_rev_print (char *str)
 {
    int i = 0;
    int size = ft_strlen(str);
    while(size - 1>=0)
    {
        write(1, &str[size], 1);
        size--;
    }
    return str;
 }