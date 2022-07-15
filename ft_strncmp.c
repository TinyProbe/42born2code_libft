/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkong <tkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 12:25:11 by tkong             #+#    #+#             */
/*   Updated: 2022/07/08 11:38:08 by tkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlen(const char *s);
int		ft_memcmp(const void *s1, const void *s2, size_t n);

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	tmp;

	tmp = ft_strlen(s1) + 1;
	if (n > tmp)
		n = tmp;
	tmp = ft_strlen(s2) + 1;
	if (n > tmp)
		n = tmp;
	return (ft_memcmp(s1, s2, n));
}
