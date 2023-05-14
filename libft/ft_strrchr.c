/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcreus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 12:45:02 by mcreus            #+#    #+#             */
/*   Updated: 2023/05/11 11:51:14 by mcreus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	while (i >= 0)
	{
		if (str[i] == c)
		{
			return ((char *)(str + i));
		}
		if (i == 0)
			break ;
		i--;
	}
	return (0);
}

/*#include <stdio.h>
int	main()
{
	char *str = "aacaaacaaaaaaaa";
	char c = 'c';
	char *a = ft_strrchr(str, c);
	printf("Conteúdo da memória: %c\n", *a);
	return 0;
}*/
