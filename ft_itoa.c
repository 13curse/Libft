/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbehar <sbehar@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 15:10:07 by sbehar            #+#    #+#             */
/*   Updated: 2024/11/16 15:49:09 by sbehar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_itoa(int n)
{
	char	*str;
	long	num;
	int		len;
	int		sign;

	num = n;
	len = 0;
	sign = 1;

	if (n <= 0)
	{
		len = 1;
		if (n < 0)
		{
			sign = -1;
			num = -num;
		}
	}
	while (n)
	{
		n = n / 10;
		len++;
	}
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return ((void *)0);
	str[len] = '\0';
	while (len > 0)
	{
		len--;
		str[len] = (num % 10) + '0';
		num = num / 10;
	}
	if (sign == -1)
		str[0] = '-';
	return (str);
}	