/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbehar <sbehar@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 22:04:26 by sbehar            #+#    #+#             */
/*   Updated: 2024/12/10 22:04:26 by sbehar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s2[i] != '\0')
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}

// int	main()
// {
// 	char	s1[10];
// 	char	*s2;

// 	s2 = "World";
// 	ft_strcpy(s1, "Hello");
// 	printf("s1 = %s, s2 = %s\n", s1, s2);
// 	ft_strcpy(s1, s2);
// 	printf("s1 = %s, s2 = %s\n", s1, s2);
// 	return (0);
// }
