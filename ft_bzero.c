/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlu <jlu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 15:58:23 by jlu               #+#    #+#             */
/*   Updated: 2023/10/25 17:08:03 by jlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_bzero(void *s, size_t n)
{
    size_t  i;
    
    i = 0;
    while (i < n)
    {
        ((char*)s)[i] = '\0';
        i++;
    }
}

//int main(void)
//{
//    char str[10] = "ABCDEFG";
//    printf("\nBefore ft_bzero(): %s\n", str);
//	ft_bzero(str, sizeof(str));
//	printf("After ft_bzero(): %s", str);
//	return (0);
//}