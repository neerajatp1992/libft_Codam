/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: netheloo <netheloo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/17 13:38:54 by netheloo          #+#    #+#             */
/*   Updated: 2026/03/17 14:06:08 by netheloo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strchr(const char *str, int search_str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == search_str)
			return ((char *)&str[i]);
		i++;
	}
	if (search_str == '\0')
		return ((char *)str);
	return (NULL);
}

// int main() {
//   char *s;
//   s = ft_strchr("Hello World", 'W');
//   printf("%s", s);
// }