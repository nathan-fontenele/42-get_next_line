/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agomes-f <agomes-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 18:23:19 by agomes-f          #+#    #+#             */
/*   Updated: 2025/12/11 19:22:02 by agomes-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t ft_strlen(char *str)
{
    int i;
    size_t len;
    
    len = 0;    
    i = 0;
    if (!str)
        return (NULL);
    while (str[i] != '\0')
    {
        i++;   
        len++;
    }
    return (len);
}

char *ft_strchr(const char *string, int c)
{
    int i;
    char c_char;

    i = 0;
    c_char = (char)c;
    if (!string)
        return (NULL);
    while (string[i])
    {
        if(string[i] == c_char)
            return ((char *)string + i);
        i++;
    }
    if (c_char == '\0')
        return ((char *) string + i);
    return (NULL);
}

char *ft_strjoin(char const *s1, char const *s2)
{
    char *buffer;
    char *pointer_to_start_buffer;
    int total_size;
    int i;
    int j;
    
    i = 0;
    j = 0;
    if (!s1 || !s2)
        return (NULL);
    total_size = ft_strlen(s1) + ft_strlen(s2) + 1;
    buffer = (char *)malloc(sizeof(char) * total_size);
    pointer_to_start_buffer = buffer;
    if (!buffer)
        return (NULL);
    while (*s1)
        *buffer++ = *s1++;
    while (*s2)
        *buffer++ = *s2++;
    buffer[i] = '\0';
    return (pointer_to_start_buffer);
}