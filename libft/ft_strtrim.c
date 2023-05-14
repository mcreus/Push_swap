/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcreus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 12:45:16 by mcreus            #+#    #+#             */
/*   Updated: 2023/05/11 11:54:02 by mcreus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	isinset(int c, const char *set)
{
	char	character;

	character = (char)c;
	while (*set)
	{
		if (*set++ == character)
			return (1);
	}
	return (0);
}

char	*ft_strtrim(const char *str, const char *set)
{
	char	*new_str;
	int		start;
	int		end;
	int		i;

	start = 0;
	end = ft_strlen(str);
	while (str[start] && isinset(str[start], set))
		start++;
	while (end > start && isinset(str[end - 1], set))
		end--;
	new_str = malloc(end - start + 1);
	if (!new_str)
		return (NULL);
	i = 0;
	while (start < end)
		new_str[i++] = str[start++];
	new_str[i] = '\0';
	return (new_str);
}

/*#include <stdio.h>

int main()
{
    char a[] = "  aabcdefgg  ";
    char s[] = "ag ";
    char *str;
    str = ft_strtrim(a, s);
    printf("|%s|\n", str);
    return 0;
}*/
