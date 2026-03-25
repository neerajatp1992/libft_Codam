/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: netheloo <netheloo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 17:17:13 by netheloo          #+#    #+#             */
/*   Updated: 2026/03/25 15:29:58 by netheloo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include<stdio.h>

void    *ft_memmove(void *dest_str, const void *src_str, size_t numBytes)
{
    unsigned char *dest;
    unsigned char *src;

    dest=(unsigned char *)dest_str;
    src=(unsigned char *)src_str;
    if(dest<src)
    {
        while(numBytes--)
        {
            *dest++=*src++;
        }
        
    }
    else if(dest>src)
    {
        dest=dest+numBytes;
        src=src+numBytes;
        while(numBytes--)
        {
            *dest--=*src--;

        }
    }
    return dest;

}

// int main(void)
// {
//     char s[6] = "Hello";
// 	char d[9] = "world123";

// 	ft_memmove(&d, &s, 4);

// 	printf("%s", d);

// }