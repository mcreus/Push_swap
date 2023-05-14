/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcreus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 12:44:06 by mcreus            #+#    #+#             */
/*   Updated: 2023/05/11 11:49:00 by mcreus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*st;
	int		i;
	int		size;

	i = 0;
	size = ft_strlen(s);
	if (s == NULL)
		return (NULL);
	st = malloc(size + 1);
	if (!st)
		return (0);
	ft_strlcpy(st, s, size + 1);
	while (i < size)
	{
		st[i] = (*f)(i, st[i]);
		i++;
	}
	return (st);
}

/* #include <stdio.h>

char my_func(unsigned int i, char c)
{
	if (c >= 'a' && c <= 'z')
	{
		c -= 32;
	}
	return (c);
}
int main()
{
	char *str = "hello.";
	char *result = ft_strmapi(str, my_func);
	printf("%s", result);
	return (0);
} */
