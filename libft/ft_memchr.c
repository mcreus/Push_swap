/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcreus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 12:36:13 by mcreus            #+#    #+#             */
/*   Updated: 2023/05/11 11:25:39 by mcreus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t len)
{
	char			*str_val;
	unsigned int	i;

	str_val = (char *)str;
	i = 0;
	while (i < len)
	{
		if (str_val[i] == c)
		{
			return ((void *)(str + i));
		}
		i++;
	}
	return (NULL);
}

/*int main () {
   const char str[] = "http://www.tutorialspoint.com";
   const char ch = '.';
   char *res;

   res = ft_memchr(str, ch, 25);

   printf("String after |%c| is - %s\n", ch, res);

   return(0);
}*/
