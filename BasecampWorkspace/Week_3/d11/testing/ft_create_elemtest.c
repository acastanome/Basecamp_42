/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elemtest.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastano <acastano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 18:49:46 by acastano          #+#    #+#             */
/*   Updated: 2021/06/09 20:23:37 by acastano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>
#include <stdio.h>

t_list	*ft_create_elem(void *data)
{
	t_list *element;
	
	element = (t_list *)malloc(sizeof(t_list));
	if (!element)
		return (0);
	element->data = data;
	element->next = NULL;
	return (element);
}
/*
int main(void)
{
	t_list *list;
	char *str;

	str = "Moikka";
	list = ft_create_elem(str);
	if (list->next == NULL)
		printf("NULL pointer\n");
	printf("\n", list->data);
	return (0);
}
*/
/*
#include <stdio.h>
#include <stdlib.h>
typedef struct            s_list
{
    struct s_list        *next;
    void                *data;
}                        t_list;

t_list    *ft_create_elem(void *data)
{
    t_list *elem;

    elem = (t_list*)malloc(sizeof(t_list));
    if (!elem)
        return (NULL);
    elem->data = data;
    elem->next = NULL;
    return (elem);
}
*/
void print_list(t_list *head)
{
    t_list *tmp = head;

    while (tmp != NULL)
    {
        printf("%d - ", *(int*)tmp->data);
        tmp = tmp->next;
    }
    printf("\n");
}
/*
int ft_list_size(t_list *begin_list)
{
    t_list *head;
    int elem_count;

    elem_count = 0;
    head = begin_list;
    while (head != 0)
    {
        head = head->next;
        elem_count++;
    }
    return elem_count;
}
*/
int main(void)
{
    int a, b, c;
    a = 7;
    b = 24;
    c = 17;
    t_list l1, l2, l3;
    t_list *head;
    int data = 1;
    l1.data = &a;
    l2.data = &b;
    l3.data = &c;

    head = &l1;
    l3.next = NULL;
    l2.next = &l3;
    l1.next = &l2;
    
    
    print_list(head);
    t_list *res;

//printf("Number of elements: %d \n", ft_list_size(head));
    
    res = ft_create_elem(&data);
    l3.next = res;
    res->next = NULL;
    
    print_list(head);

//    printf("Number of elements: %d \n", ft_list_size(head));
    return (0);
}
