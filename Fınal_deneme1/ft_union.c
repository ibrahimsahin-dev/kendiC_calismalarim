int check_doubles2(char *str1, char s)
{
    int i =0;
    while(str1[i])
    {
        if(str[i]==s)
            return 0;
        i++;
    }
    return 1;
}
int check_doubles1(char *str, char s, int pos)
{
    int i = 0;
    while(i<pos)
    {
        if(str[i]==s)
            return 0;
        i++;
    }
    return 1;
    
}



int main(int ac, char**argv)
{
    int i =0;
    int j = 0;
    if(ac != 3)
    {
        write(1, "\n", 1);
        return 0;
    }
    else{

    //once birinci stringi yazdırayım
    while(argv[1][i])
    {
        if(check_doubles1(argv[1], argv[1][i], i))
            write(1, &argv[1][i], 1);
        i++;
    }
    i = 0;
     while(argv[2][i])
    {
        if(check_doubles1(argv[2], argv[2][i], i))
        {
            if(check_doubles2(argv[1], argv[2][i]))
                write(1, &argv[2][i], 1);
        }
        i++;
    }
    write(1, "\n", 1);
    return 0;

    }
}