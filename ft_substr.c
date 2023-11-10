/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlu <jlu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 13:28:48 by jlu               #+#    #+#             */
/*   Updated: 2023/11/10 18:17:38 by jlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t  i;
    char    *substr;

    if (!s)
        return (NULL);
    i = 0;
    if (start >= ft_strlen((char *)s))
    {
        if (!(substr = (char *)malloc((1) * sizeof(char))))
            return (NULL);
        substr[0] = '\0';
        return (substr);
    }
    if (!(substr = (char *)malloc((len + 1) * sizeof(char))))
        return (NULL);
    while (i < len)
        substr[i++] = s[start++];
    substr[i] = '\0';
    return (substr);
}