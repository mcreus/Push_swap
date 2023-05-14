/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcreus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 12:37:05 by mcreus            #+#    #+#             */
/*   Updated: 2023/05/11 11:28:25 by mcreus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	size_t			i;
	char			*dest_val;
	char			*src_val;

	dest_val = (char *)dest;
	src_val = (char *)src;
	if (len == 0)
		return (dest);
	if (src < dest)
	{
		while (len-- > 0)
		{
			dest_val[len] = src_val[len];
		}
	}
	else
	{
		i = 0;
		while (i < len)
		{
			dest_val[i] = src_val[i];
			i++;
		}
	}
	return (dest);
}

/*#include <stdio.h>
int main () {
    
    char src[]  = "RafaelVieira";
	char dest[] = "hello";
    ft_memmove(dest, src, 2);
    printf("After ft_memmove dest = %s, src = %s\n", dest, src);
    return(0);
}*/
