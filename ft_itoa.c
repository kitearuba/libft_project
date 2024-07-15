/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrrodri <chrrodri@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 12:03:30 by chrrodri          #+#    #+#             */
/*   Updated: 2024/07/08 18:23:33 by chrrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	num_len(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len = 1;
	while (n != 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}

static char	*handle_min_int(void)
{
	char	*result;

	result = (char *)malloc(12 * sizeof(char));  // "-2147483648" + '\0' = 12 chars
	if (!result)
		return (NULL);
	ft_strlcpy(result, "-2147483648", 12);
	return (result);
}

char	*ft_itoa(int n)
{
	char	*result;
	int		len;
	long	num;
	int		sign;

	if (n == -2147483648)  // Handle INT_MIN without using INT_MIN constant
		return (handle_min_int());
	num = n;
	len = num_len(n);
	result = (char *)malloc((len + 1) * sizeof(char));
	if (!result)
		return (NULL);
	result[len] = '\0';
	sign = 1;
	if (num < 0)
	{
		sign = -1;
		num = -num;
	}
	while (len > 0)
	{
		result[--len] = (num % 10) + '0';
		num /= 10;
	}
	if (sign == -1)
		result[0] = '-';
	return (result);
}

