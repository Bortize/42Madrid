/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborboll <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 12:19:45 by aborboll          #+#    #+#             */
/*   Updated: 2019/09/17 16:35:31 by aborboll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	num;
	int	f;
	int	neg;

	i = 0;
	f = 0;
	num = 0;
	neg = 0;
	while (str[i] != '\0' &&
	!(str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
	str[i] == '\v' || str[i] == '\r' || str[i] == '\f'))
	{
		if (str[i] == '-')
			neg++;
		else if (str[i] != '+')
		{
			if (f == 0 && (str[i] >= '0' && str[i] <= '9'))
				num = num * 10 + ((int)str[i] - '0');
			else
				f = 1;
		}
		i++;
	}
	return (neg % 2 != 0) ? num * -1 : num;
}
