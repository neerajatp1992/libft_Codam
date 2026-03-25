/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: netheloo <netheloo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 14:20:13 by netheloo          #+#    #+#             */
/*   Updated: 2026/03/16 17:14:07 by netheloo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isalnum(int ch)
{
	if (ch >= '0' && ch <= '9')
		return (1);
	else if ((ch >= 'A' && ch <= 'Z'))
		return (1);
	else if ((ch >= 'a' && ch <= 'z'))
		return (1);
	else
		return (0);
}

//  int main()
// {
//     int value;
//     value=ft_isalnum('%');
//     printf("%d",value);
//     return 0;
// }