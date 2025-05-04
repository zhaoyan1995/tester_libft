/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstsize.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ZHAOYAN <ZHAOYan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 16:43:28 by ZHAOYAN           #+#    #+#             */
/*   Updated: 2025/03/30 18:56:11 by ZHAOYAN          ###   ########.fr       */
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
	printf("===ft_lstsize test===\n");
	if (ft_lstsize(head) == 0)
		printf("test 1: %sOK%s\n", green, reset);
	else
		printf("test 1: %sNOK%s\n", red, reset);
	ft_lstadd_front(&head, ft_lstnew(&c));
	if (ft_lstsize(head) == 1)
		printf("test 2: %sOK%s\n", green, reset);
	else
		printf("test 2: %sNOK%s\n", red, reset);
	ft_lstadd_front(&head, ft_lstnew(&b));
	if (ft_lstsize(head) == 2)
		printf("test 3: %sOK%s\n", green, reset);
	else
		printf("test 3: %sNOK%s\n", red, reset);
	ft_lstadd_front(&head, ft_lstnew(&a));
	if (ft_lstsize(head) == 3)
		printf("test 4: %sOK%s\n", green, reset);
	else
		printf("test 4: %sNOK%s\n", red, reset);
	printf("===ft_lstadd_front test===\n");	
	free_linked_list(head);
	printf("===end ft_lstsize test===\n");
	return (0);
}
