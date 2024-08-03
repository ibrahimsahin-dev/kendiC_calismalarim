#include <stdio.h>
#include <stdlib.h>

int check_separator(char c)
{
    if (c == '\n' || c == '\t' || c == ' ' || c == '\0')
        return 1;
    return 0;
}

int count_strings(char *str)
{
    int i;
    int count;

    count = 0;
    i = 0;
    while (str[i] != '\0')
    {
        while (str[i] != '\0' && check_separator(str[i]))
            i++;
        if (str[i] != '\0')
            count++;
        while (str[i] != '\0' && !check_separator(str[i]))
            i++;
    }
    return count;
}

int main()
{
    char test_str[] = "  Hello\tworld\nThis is a test ";
    int num_strings = count_strings(test_str);

    printf("Number of strings: %d\n", num_strings);

    return 0;
}
