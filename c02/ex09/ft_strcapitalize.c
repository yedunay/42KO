/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydunay <ydunay@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 10:19:32 by ydunay            #+#    #+#             */
/*   Updated: 2023/07/19 10:19:34 by ydunay           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	if_i;

	i = 0;
	if_i = 1;
	while (str[i])
	{
		if (if_i == 1 && (str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] -= 'a' - 'A';
			if_i = 0;
		}
		else if (if_i == 0 && (str[i] >= 'A' && str[i] <= 'Z'))
			str[i] += 'a' - 'A';
		else if ((str[i] < '0' || str[i] > '9') && (str[i] < 'A'
				|| str[i] > 'Z') && (str[i] < 'a' || str[i] > 'z'))
			if_i = 1;
		else
			if_i = 0;
		i++;
	}
	return (str);
}
