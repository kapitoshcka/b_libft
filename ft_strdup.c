/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkarnats <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 16:01:24 by fkarnats          #+#    #+#             */
/*   Updated: 2018/09/12 16:01:35 by fkarnats         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** strdup -- save a copy of a string
** The strdup() function allocates sufficient memory for
** a copy of the string s1, does the copy, and returns a pointer to it.
** The pointer may subsequently be used as an argument
** to the function free(3).
*/

#include <string.h>
#include <stdio.h>

char	*ft_strdup(const char *src)
{
	char	*dup;
	int		i;

	i = 0;
	while (src[i] != '\0')
		i++;
	dup = (char *)malloc(i + 1);
	if (dup == NULL)
		return (0);
	i = 0;
	while (src[i] != '\0')
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

/*
** int main()
**  {
**     char str[] = "my library";
**     char* res = ft_strdup(str);
**     printf("%s", res);
**     return 0;
** }
/*
