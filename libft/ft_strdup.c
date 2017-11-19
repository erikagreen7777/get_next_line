/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egreen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/19 06:10:55 by egreen            #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2017/11/17 12:18:47 by egreen           ###   ########.fr       */
=======
/*   Updated: 2017/10/06 09:11:51 by egreen           ###   ########.fr       */
>>>>>>> 912280583a873f6858d24bb07e02d90a66fee452
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

<<<<<<< HEAD
char		*ft_strdup(const char *s)
{
	int		i;
	char	*dup;

	i = 0;
	dup = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!dup)
		return (NULL);
	while (s[i])
	{
		dup[i] = s[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
=======
char	*ft_strdup(const char *src)
{
	char	*dest;
	int		i;

	dest = (char *)malloc(sizeof(char) * ft_strlen(src) + 1);
	i = 0;
	if (dest == NULL)
		return (NULL);
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
>>>>>>> 912280583a873f6858d24bb07e02d90a66fee452
}
