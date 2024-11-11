/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbehar <sbehar@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 11:35:52 by sbehar            #+#    #+#             */
/*   Updated: 2024/11/11 16:23:55 by sbehar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <unistd.h>
// #include <stdio.h>

size_t	ft_strlen(const char *str)
{
	int	len;

	len = 0;
	if (str == (void *)0)
		return (0);
	while (str[len] != '\0')
		len++;
	return (len);
}

/*int	main()
{
	printf("%zu\n", ft_strlen("Hello"));
	return (0);
}*/