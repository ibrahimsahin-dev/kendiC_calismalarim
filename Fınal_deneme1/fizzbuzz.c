void ft_write_numbers(int nb)
{
    if(nb>9)
        ft_write_numbers(nb/10);
    write(1, &"0123456789"[nb%10],1);
}
int main()
{
    int i = 1;
    while(i<=100)
    {
        if(i%3==0 && i%5 == 0)
        {
            write(1, "fizzbuzz", 8);
        }
        else if(i%3==0)
        {
            write(1, "fizz", 4);
        }
        else if(i%5==0)
        {   
            write(1, "buzz", 4);
        }
        else{
            ft_write_numbers(i);
        }
    }
    return 0;
}