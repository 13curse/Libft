/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbehar <sbehar@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 14:10:43 by sbehar            #+#    #+#             */
/*   Updated: 2024/11/12 14:48:44 by sbehar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
		void	*ptr;
	
		ptr = malloc(nmemb *size);
		if (ptr == (void *)0)
			return ((void *)0);
		ft_bzero(ptr, size * nmemb);
		return (ptr);
}