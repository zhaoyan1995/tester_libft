/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstadd_front.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ZHAOYAN <ZHAOYan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 16:43:28 by ZHAOYAN           #+#    #+#             */
/*   Updated: 2025/05/03 18:32:40 by yanzhao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void	free_linked_list(t_list *head)
{
	t_list	*next;

	while (head)
	{
		next = head->next;
		free(head);
		head = next;
	}
}

int     main(void)
{
	t_list	*head;
	t_list	**head2;
	t_list	*a1;
	t_list	*new;
	const char	*green = "\033[32m";
	const char	*red = "\033[31m";
	const char	*reset = "\033[0m";
	int	c;
	int	b;
	int	a;

	head = NULL;
	c = 30;
	b = 20;
	a = 10;
	ft_lstadd_front(&head, ft_lstnew(&c));
	ft_lstadd_front(&head, ft_lstnew(&b));
	ft_lstadd_front(&head, ft_lstnew(&a));
	printf("===ft_lstadd_front test===\n");
	if (*(int *)head->content == a && *(int *)head->next->content == b && *(int *)head->next->next->content == c && head->next->next->next == NULL)
		printf("test 1: %sOK%s\n", green, reset);
	else
		printf("test 1: %sNOK%s\n", red, reset);
	free_linked_list(head);
	head2 = NULL;
	a1 = ft_lstnew(&a);
	ft_lstadd_front(head2, a1);
	if (head2 == NULL)
		printf("test 2: %sOK%s\n", green, reset);
	else
		printf("test 2: %sNOK%s\n", red, reset);
	free(a1);
	new = NULL;
	head = NULL;
	ft_lstadd_front(&head, new);
	if (head == NULL)
		printf("test 3: %sOK%s\n", green, reset);
	else
		printf("test 3: %sNOK%s\n", red, reset);
	head = ft_lstnew(&a);
	new = NULL;
	ft_lstadd_front(&head, new);
	if (*(int *)head->content == a && head->next == NULL)
		printf("test 4: %sOK%s\n", green, reset);
	else
		printf("test 4: %sNOK%s\n", red, reset);
	free_linked_list(head);
	printf("===end ft_lstadd_front test===\n");
	return (0);
}
