/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egreen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/19 06:27:00 by egreen            #+#    #+#             */
/*   Updated: 2017/09/19 06:29:00 by egreen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlen(const char *str)
{
	int		i;

	i = 0;
<<<<<<< HEAD
	if (!str)
		return (0);
=======
>>>>>>> 912280583a873f6858d24bb07e02d90a66fee452
	while (str[i])
		i++;
	return (i);
}
