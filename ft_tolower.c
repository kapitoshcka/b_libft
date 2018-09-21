/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkarnats <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 16:35:16 by fkarnats          #+#    #+#             */
/*   Updated: 2018/09/12 16:35:25 by fkarnats         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** tolower -- upper case to lower case letter conversion
** The tolower() function converts an upper-case letter
** to the corresponding lower-case letter.
*/

#include <ctype.h>
#include <stdio.h>

int		ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		return (c + 32);
	return (c);
}

/*
** int main()
** {
** 	char c, result;
**
**     c = 'M';
** 	result = ft_tolower(c);
**     printf("The result is %c\n", result);
**
**     c = 'g';
** 	result = ft_tolower(c);
**     printf("The result is %c\n", result);
**
**     c = '+';
** 	result = ft_tolower(c);
**     printf("The result is %c\n", result);
**
** 	return 0;
** }
*/
