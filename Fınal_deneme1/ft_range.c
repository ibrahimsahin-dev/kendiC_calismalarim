#include <stdlib.h> // malloc() ve free() için gerekli

int ft_abs(int st, int end)
{
    if (st < end)
        return (end - st);
    else
        return (st - end);
}
void ft_kontrol(int *arr, int st, int end)
{
    int i = 0;
    int range = ft_abs(st,end)+1;
    if(st==end)
        arr[0]=st;
    else if(end>st)
    {
        while(range>i)
        {
            arr[i]=st+i;
            i++;
        }
    }else if(st>end)
    {
        while(range>i)
        {
            arr[i]=st-i;
            i++;
        }
    }
}

int *ft_range(int start, int end)
{
    int *arr;
    int range;
    int i;

    range = ft_abs(start, end) + 1; // Aralığı hesapla (dahil)
    arr = (int *)malloc(range * sizeof(int)); // Belleği ayır
    i = 0;
    ft_kontrol(arr,start,end);
    return arr; // Diziyi döndür
}
