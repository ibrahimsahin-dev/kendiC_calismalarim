#include <unistd.h>

int main(int argc, char argv**)
{
    char* str = argv[1];
    if(argc != 2)
    {
        write(1, "\n",1);
        return 0;
    }
    int i = 0;
    while (str[i]&& str[i]==32 && (str[i]>=9 && str[i]<=13))
    {
        i++;
    }
    while(! (str[i]==32 && (str[i]>=9 && str[i]<=13)))
    {
    write(1, &str[i], 1);
        i++;
    }
    

    return 0;
}