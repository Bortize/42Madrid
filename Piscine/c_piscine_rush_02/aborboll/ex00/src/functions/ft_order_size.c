/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_order_size.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborboll <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/22 11:02:08 by aborboll          #+#    #+#             */
/*   Updated: 2019/09/22 11:02:19 by aborboll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			order_size(char **arr)
{
	int i;

	i = 0;
	while (arr[i + 1] != '\0')
	{
		i++;
	}
	return (i);
}
