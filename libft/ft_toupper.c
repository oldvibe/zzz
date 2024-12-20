/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yanait-e <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 13:52:17 by yanait-e          #+#    #+#             */
/*   Updated: 2024/11/17 13:52:20 by yanait-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_toupper(int i)
{
	if (i >= 97 && i <= 122)
	{
		return (i - 32);
	}
	return (i);
}
