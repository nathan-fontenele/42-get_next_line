/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agomes-f <agomes-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 18:23:19 by agomes-f          #+#    #+#             */
/*   Updated: 2025/12/11 18:54:26 by agomes-f         ###   ########.fr       */
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