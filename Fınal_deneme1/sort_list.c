#include <list.h>

t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
    int swap;
    tlist* temp;
    temp=lst;
    while(lst->next!=NULL)
    {
        if((cmp*)(lst->data,lst->next->data) == 0)
        {
            swap=lst->data;
            lst->data=lst->next->data;
            lst->next->data=swap;
            lst = temp;
        }
        else 
            lst = lst->next;
    }   
    lst = temp;
    return lst;
}