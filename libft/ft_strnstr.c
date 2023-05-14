/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcreus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 12:44:44 by mcreus            #+#    #+#             */
/*   Updated: 2023/05/11 11:52:58 by mcreus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *sub_str, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!sub_str[j])
		return ((char *)(str));
	while (str[i] && sub_str[j] && len)
	{
		if (str[i] == sub_str[j])
			j++;
		else if (j)
		{
			j = 0;
			continue ;
		}
		i++;
		len--;
	}
	if (!sub_str[j])
		return ((char *)(str + i - j));
	return (0);
}

/*int main () 
{
 const char haystack[20] = "TutorialsPoint";
 const char needle[10] = "to";
 char *result;

 result = ft_strnstr(haystack, needle, 2);
 printf("The substring is: %s\n", result);
 return(0);
}*/
