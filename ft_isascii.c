/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: netheloo <netheloo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 14:30:20 by netheloo          #+#    #+#             */
/*   Updated: 2026/03/25 15:31:33 by netheloo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_isascii(int ch) {
  if (ch >= 0 && ch <= 127)
    return 1;
  else
    return 0;
}

// int main() {
//   int value;
//   value = ft_isascii('%');
//   printf("%d", value);
//   return 0;
// }