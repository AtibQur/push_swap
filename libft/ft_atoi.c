/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hqureshi <hqureshi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 14:50:42 by hqureshi          #+#    #+#             */
/*   Updated: 2022/02/28 14:46:51 by hqureshi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_manage_longmin(unsigned long result, int count)
{
	int	value;

	if (count % 2 != 0)
		value = -1;
	else
		value = 1;
	if (value == -1 && result > 2147483648)
	{
		write(2, "Error\n", 6);
		exit(0);
	}
	else if (value == 1 && result > 2147483647)
	{
		write(2, "Error\n", 6);
		exit(0);
	}
	return (result * value);
}

int	ft_atoi(const char *str)
{
	int				i;
	int				count;
	unsigned long	result;

	i = 0;
	count = 0;
	result = 0;
	while (str[i] == '\t' || str[i] == '\v' || str[i] == '\n'
		|| str[i] == '\r' || str[i] == '\f' || str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			count++;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = (result * 10) + str[i] - '0';
		i++;
	}
	return (ft_manage_longmin(result, count));
}
