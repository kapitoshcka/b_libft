/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkarnats <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 16:00:02 by fkarnats          #+#    #+#             */
/*   Updated: 2018/09/12 16:00:10 by fkarnats         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** strlen, strnlen -- find length of string
** The strlen() function computes the length of the string s.
** The strlen() function returns the number of characters
** that precede the terminating NUL character.
*/

#include <stdio.h>

size_t	ft_strlen(const char *s)
{
	size_t i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

/*
** int main()
** {
**    char str[] = "Life is good.";
**    int result = ft_strlen(str);
**    printf("The length of the string is %d.\n", result);
**    return 0;
** }
*/
