/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/10 21:55:35 by cghanime          #+#    #+#             */
/*   Updated: 2019/10/10 19:29:18 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*string;
	size_t	i;

	i = 0;
	if (!(string = malloc(sizeof(char) * size + 1)))
		return (NULL);
	while (i < size + 1)
	{
		string[i] = '\0';
		i++;
	}
	return (string);
}
