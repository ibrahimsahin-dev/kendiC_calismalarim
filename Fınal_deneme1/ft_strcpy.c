char    *ft_strcpy(char *s1, char *s2)
{
    int i = 0;
    while(s1 && s2)
    {
        s1[i]=s2[i];
        i++;
    }
    return s1;
}