char *check_doubles(*str)
{
    int i = 0;
    int j = 0;
    char x;
    while(str[i])
    {
        while(str[j])
        {
            if(str[i] == str[j]) 
                x+= str[i];
        }
    }
}


int main(int argc, char*av[])
{
    if(argc!=3)
    {
        write(1, "\n", 1);
        return 0;
    }
    char ilk[]=av[1];
    char son[]=av[2];
    char el[];
    int i = 0;
    int j = 0;
    while(ilk[i])
    {
        j = 0;
        while (son[j])
        {
            if(ilk[i]==son[j])
            {
                el+=ilk[i];
                i++;
            }
            j++;
        }
        i++;
    }
    write(1, "\n", 1);
    return 0;
}