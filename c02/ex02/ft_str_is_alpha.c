/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydunay <ydunay@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 01:51:36 by ydunay            #+#    #+#             */
/*   Updated: 2023/07/16 01:51:37 by ydunay           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int    ft_str_is_alpha(char *str)
{
    int    i;

    i = 0;
    if (str[i] == '\0')
    {
        return (1);
    }
    while (str[i] != '\0')
    {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A'
                && str[i] <= 'Z'))
            i++;
        else
            return (0);
    }
    return (1);
}
