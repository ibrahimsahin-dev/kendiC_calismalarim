int main(int ac, char** argv)
{
    if(ac<1)
        write(1, "\n", 1);
    ac--;
    int i  = 0;
    while(argv[ac][i])
    {
        write(1, &argv[ac][i], 1);
        i++;
    }
}