/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: netheloo <netheloo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 11:16:12 by netheloo          #+#    #+#             */
/*   Updated: 2026/03/25 11:37:38 by netheloo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t ft_strlen(const char *str)
{
  size_t i;
  i = 0;
  while (str[i] != '\0') {
    i++;
  }
  return i;
}

// int main() {
//   size_t value;
//   value = ft_strlen("hello world");
//   printf("%zu", value);
//   return 0;
// }