/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 05:43:02 by cghanime          #+#    #+#             */
/*   Updated: 2019/11/08 06:21:51 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s_new;
	size_t	len_s1;
	size_t	len_s2;

	if (!s1 && !s2)
		return (NULL);
	if (!s1)
		s_new = ft_strdup((char *)s2);
	else if (!s2)
		s_new = ft_strdup((char *)s1);
	else
	{
		len_s1 = ft_strlen(s1);
		len_s2 = ft_strlen(s2);
		if (!(s_new = (char *)malloc(sizeof(char) * (len_s1 + len_s2 + 1))))
			return (NULL);
		ft_strncpy(s_new, s1, ft_strlen(s1));
		ft_strcpy(s_new + ft_strlen(s1), s2);
	}
	return (s_new);
}
