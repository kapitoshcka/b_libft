/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkarnats <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 16:34:33 by fkarnats          #+#    #+#             */
/*   Updated: 2018/09/12 16:34:47 by fkarnats         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** toupper -- lower case to upper case letter conversion
*/

#include <ctype.h>
#include <stdio.h>

int		ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
	return (c);
}

/*
** int main()
** {
** 		char c, result;
**
**      c = 'M';
**  	result = ft_toupper(c);
**      printf("The result is %c\n", result);
**
**      c = 'g';
**  	result = ft_toupper(c);
**      printf("The result is %c\n", result);
**
**      c = '+';
**  	result = ft_toupper(c);
**      printf("The result is %c\n", result);
**
**  	return 0;
** }
*/
