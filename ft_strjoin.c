/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchamorr <jchamorr@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 18:34:46 by jchamorr          #+#    #+#             */
/*   Updated: 2021/11/16 13:09:50 by jchamorr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, const char *s2)
{
	char	*s3;
	size_t	len_1;
	size_t	len_t;

	while (s1 && s2)
	{
		len_1 = ft_strlen(s1) + 1;
		len_t = len_1 + ft_strlen(s2);
		s3 = (char *)malloc(len_t * sizeof(char));
		if (!s3)
			return (0);
		ft_strlcpy(s3, s1, len_1);
		ft_strlcat(s3, s2, len_t);
		return (s3);
	}
	return (0);
}
