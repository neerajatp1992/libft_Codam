/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: netheloo <netheloo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 14:49:06 by netheloo          #+#    #+#             */
/*   Updated: 2026/03/25 15:29:24 by netheloo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memcpy(void *to, const void *from, size_t n)
{
	unsigned char	*source;
	unsigned char	*dest;

	source = (unsigned char *)from;
	dest = (unsigned char *)to;
	while (n > 0)
	{
		*dest = *source;
		dest++;
		source++;
		n--;
	}	
	return (dest);
}

// int main()
// {
// 	char s[6] = "Hello";
// 	char d[9] = "world123";

// 	ft_memcpy(&d, &s, 4);

// 	printf("%s", d);
// }
