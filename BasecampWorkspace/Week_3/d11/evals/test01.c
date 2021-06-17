#include <stdio.h>
#include <stdlib.h>

typedef    struct        s_list
{
    struct s_list    *next;
    void            *data;
}                    t_list;

t_list    *ft_create_elem(void *data);
void    ft_list_push_back(t_list **begin_list, void *data);
void    print_list_num(t_list *begin_list);

int main(void)
{
    t_list *list, *head, *new;
    int a = 10;
    int b = 20;

    list = NULL;
    new = NULL;
    list = ft_create_elem(&a);
    head = list;
    new = ft_create_elem(&b);
    list->next = new;

    printf("original list with 10 + 20:\n");
    print_list_num(head);

    int c = 555;

    ft_list_push_back(&head, &c);
    
    printf("\nnew list with 555 in the end:\n");
    print_list_num(head);

    int d = 50;
    ft_list_push_back(&head, &d);

    printf("\nnew list with 50 in the end:\n");
    print_list_num(head);

    free(list);
    free(new);

    return (0);
}

t_list    *ft_create_elem(void *data)
{
    t_list *list;

    list = (t_list*)malloc(sizeof(t_list));
    if (!list)
        return (NULL);
    list->data = data;
    list->next = NULL;
    return (list);
}

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*head;

	if (*begin_list != 0)
	{
		head = *begin_list;
		while (head->next != 0)
		{
			head = head->next;
		}
		head->next = ft_create_elem(data);
	}
	else
		*begin_list = ft_create_elem(data);
}

void    print_list_num(t_list *begin_list)
{
    t_list *tmp;

    tmp = begin_list;
    while (tmp)
    {
        printf("%d\n", *(int*)tmp->data);
        tmp = tmp->next;
    }
}
