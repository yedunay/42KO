/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydunay <ydunay@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 01:52:03 by ydunay            #+#    #+#             */
/*   Updated: 2023/07/16 01:52:05 by ydunay           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int    ft_str_is_lowercase(char *str)
{
    int    i;

    i = 0;
    if (str[i] == '\0')
    {
        return (1);
    }
    while (str[i] != '\0')
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            i++;
        else
            return (0);
    }
    return (1);
}
