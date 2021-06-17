#include <stdio.h>
#include <stdlib.h>

typedef    struct        s_list
{
    struct s_list    *next;
    void            *data;
}                    t_list;


t_list    *ft_create_elem(void *data);


int main(void)
{
    t_list *list;
    char *str;
    char *str2;
    
    str2 = "there\n";
    str = "13124\n";

    list = NULL;
    list = ft_create_elem(str);
    t_list *new;
    new = NULL;
    new = ft_create_elem(str2);
    list->next = new;

    while (list)
    {
        printf("%s", list->data);
        list = list->next;
    }
	/*if (list->next == NULL)
		printf("this is null");
*/
    free(list);
    free(new);

    return (0);
}

t_list		*ft_create_elem(void *data)
{
	t_list *list;

	list = (t_list*)malloc(sizeof(t_list));
	if (list)
	{
		list->data = data;
		list->next = NULL;
	}
	return (list);
}