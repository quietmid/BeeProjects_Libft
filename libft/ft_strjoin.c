/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlu <jlu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 14:31:14 by jlu               #+#    #+#             */
/*   Updated: 2023/11/02 15:26:25 by jlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strjoin(char const *s1, char const *s2)
{
    char    *str;
    size_t  len;
    size_t  i;
    size_t  j;

    len = ft_strlen(s1) + ft_strlen(s2);
    str = (char *)malloc((len + 1) * sizeof(char));

    if (!str)
        return (NULL);
    i = 0;
    j = 0;
    while (s1[i])
        str[j++] = s1[i++];
    i = 0;
    while (s2[i])
        str[j++] = s2[i++];
    str[j] = '\0';
    return (str);
}

// allocates enough memory for the joined strings (with malloc) and returns a new string (s1 + s2)