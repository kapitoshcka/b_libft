/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkarnats <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 16:19:14 by fkarnats          #+#    #+#             */
/*   Updated: 2018/09/12 16:19:57 by fkarnats         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** strcpy -- copy strings
** strcpy -- function copy the string src to dst
** (including the terminating `\0' character.)
** The strcpy() functions return dst.
*/

#include <string.h>
#include <stdio.h>

char	*ft_strcpy(char *dst, const char *src)
{
	int		i;

	i = 0;
	while (src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = src[i];
	return (dst);
}

/*
**  int main ()
** {
**     char example[50];
**     ft_strcpy(example, "Life is good!");
**     printf("%s\n", example);
**     return(0);
** }
*/
