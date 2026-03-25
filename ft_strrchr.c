/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: netheloo <netheloo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/17 14:11:25 by netheloo          #+#    #+#             */
/*   Updated: 2026/03/17 15:00:27 by netheloo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strrchr(const char *str, int search_str)
{
	int	i;
	int	str_len;

	str_len = 0;
	while (str[str_len] != '\0')
		str_len++;
	i = str_len;
	while (i > 0)
	{
		if (str[i] == search_str)
			return ((char *)&str[i]);
		i--;
	}
	if (search_str == '\0')
		return ((char *)str);
	return (NULL);
}

// int main() {
//   char *s;
//   s = ft_strrchr("Hello World", 'W');
//   printf("%s", s);
// }