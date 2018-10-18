/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkarnats <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 16:22:25 by fkarnats          #+#    #+#             */
/*   Updated: 2018/09/12 16:22:35 by fkarnats         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** strncpy -- copy strings
** The strncpy() functions copy at most len characters from
** src into dst.  If src is less than len characters long, the remainder of
** dst is filled with `\0' characters.  Otherwise, dst is not terminated.
** The strncpy() functions return dst. If stpncpy() does not terminate
** dst with a NUL character, it instead returns a pointer to dst[n]
** (which does not necessarily refer to a valid memory location.)
*/

#include <string.h>
#include <stdio.h>

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t i;

	i = 0;
	while (src[i] != '\0' && (i < len))
	{
		dst[i] = src[i];
		i++;
	}
	while (i < len)
	{
		dst[i] = '\0';
		i++;
	}
	return (dst);
}

/*
** int main ()
** {
**     char example[15];
**     ft_strncpy(example, "Life is good!", 9);
**     printf("%s\n", example);
**
**     return(0);
** }
*/
