/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydunay <ydunay@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 11:32:45 by ydunay            #+#    #+#             */
/*   Updated: 2023/07/22 11:33:37 by ydunay           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int		len_str;
	int		j;

	len_str = 0;
	j = 0;
	if (to_find[j] == '\0')
		return (str);
	while (str[len_str])
	{
		while (str[len_str + j] == to_find[j] && str[len_str + j])
			j++;
		if (to_find[j] == '\0')
			return (str + len_str);
		len_str++;
		j = 0;
	}
	return (0);
}
