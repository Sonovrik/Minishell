/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmidori <lmidori@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/03 12:34:40 by drina             #+#    #+#             */
/*   Updated: 2020/10/02 19:25:09 by lmidori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*list;

	list = (char *)xmalloc((ft_strlen(s1) + 1) * sizeof(char));
	if (!list)
		return (NULL);
	ft_memcpy(list, s1, ft_strlen(s1) + 1);
	return (list);
}
