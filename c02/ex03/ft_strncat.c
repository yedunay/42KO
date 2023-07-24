/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydunay <ydunay@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 11:32:01 by ydunay            #+#    #+#             */
/*   Updated: 2023/07/22 11:32:12 by ydunay           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int		len_dest;
	unsigned int		len_src;

	len_dest = 0;
	while (dest[len_dest])
		len_dest++;
	len_src = 0;
	while (src[len_src] && len_src < nb)
	{
		dest[len_dest] = src[len_src];
		len_dest++;
		len_src++;
	}
	dest[len_dest] = '\0';
	return (dest);
}
