/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkarnats <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 16:25:04 by fkarnats          #+#    #+#             */
/*   Updated: 2018/09/12 16:25:10 by fkarnats         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** strcmp -- compare strings
** The strcmp() functions lexicographically compare the
** null-terminated strings s1 and s2.
** The strcmp() functions return an integer greater than,
** equal to, or less than 0, according as the string s1 is greater than,
** equal to, or less than the string s2.
*/

#include <string.h>
#include <stdio.h>

int		ft_strcmp(const char *s1, const char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

/*
**  int main ()
**{
**    	char str1[15] = "abcdef";
**    	char str2[15] = "ABCDEF";
**    	int result = ft_strcmp(str1, str2);
** 	printf("%d\n", result);
**    	if(result < 0) {
**       	printf("str1 is less than str2");
**    	} else if(result > 0) {
**       	printf("str2 is less than str1");
**    	} else {
**       	printf("str1 is equal to str2");
** 	}
** 	return(0);
**}
*/
