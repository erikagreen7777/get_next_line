/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strfjoin.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egreen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 15:17:58 by egreen            #+#    #+#             */
/*   Updated: 2017/11/13 15:18:29 by egreen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strfjoin(char *s1, char *s2)
{
	char			*str;
	size_t			i;
	size_t			j;
	size_t			len1;
	size_t			len2;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	str = ft_strnew(len1 + len2);
	if (!str)
		return (NULL);
	i = 0;
	j = 0;
	while (i < len1)
		str[j++] = s1[i++];
	i = 0;
	while (i < len2)
		str[j++] = s2[i++];
	str[j] = '\0';
	free(s1);
	s1 = NULL;
	return (str);
}
