/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydunay <ydunay@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 22:04:59 by ydunay            #+#    #+#             */
/*   Updated: 2023/07/15 22:30:48 by ydunay           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
char *ft_strupcase(char *str)
{
	int i ;
	i = 0;
	while(str[i])
	{
		if(str[i] >= 'a' && str[i] <= 'z')
		{
		str[i] -= 32;
		}
		i++;
	}
	return str;
}
#include <string.h>
#include <stdio.h>
int	main()
{
	char str[] = "abcdefghj";
	printf("%s", ft_strupcase(str));
}

