/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdamnjan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 19:41:30 by vdamnjan          #+#    #+#             */
/*   Updated: 2023/07/11 13:03:42 by vdamnjan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	capitalize_next;
	int	i;

	capitalize_next = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (capitalize_next && (str[i] >= 'A' && str[i] <= 'Z'))
			capitalize_next = 0;
		else if (capitalize_next && (str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] -= 32;
			capitalize_next = 0;
		}
		else if (!capitalize_next && (str[i] >= 'A' && str[i] <= 'Z'))
			str[i] += 32;
		else if ((capitalize_next || !capitalize_next) \
			&& (str[i] >= '0' && str[i] <= '9'))
			capitalize_next = 0;
		else if (str[i] < 'A' || (str[i] > 'Z' && str[i] < 'a') || str[i] > 'z')
			capitalize_next = 1;
		i++;
	}
	return (&*str);
}
