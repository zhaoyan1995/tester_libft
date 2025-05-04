/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   striteri.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ZHAOYAN <ZHAOYan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 16:18:57 by ZHAOYAN           #+#    #+#             */
/*   Updated: 2025/03/29 18:30:27 by ZHAOYAN          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	applyf(unsigned int i, char *s)
{
	*s = *s + i;
}

int	main(void)
{
	char    result[] = "ABCDEF";
	char	result2[] = "";

	printf("===ft_striteri test===\n");
	ft_striteri(result, &applyf);
	if (strcmp(result, "ACEGIK") == 0)
		printf("test 1: OK\n");
	else
		printf("test 1: NOK\n");
	ft_striteri(result2, &applyf);
	if (strcmp(result2, "") == 0)
		printf("test 2: OK\n");
	else
		printf("test 2: NOK\n");
	printf("===end ft_striteri test===\n");
	return (0);
}
