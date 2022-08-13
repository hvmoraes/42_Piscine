/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcorrea- <hcorrea-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 12:16:09 by hcorrea-          #+#    #+#             */
/*   Updated: 2022/08/10 12:15:49 by hcorrea-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcapitalize(char *str)
{
	int	i;

	if (str[0] >= 97 && str[0] <= 122)
		str[0] -= 32;
	i = 1;
	while (str[i])
	{
		if (!(((str[i - 1] >= 48) && (str[i - 1] <= 57))
				|| ((str[i - 1] >= 65) && (str[i - 1] <= 90))
				|| ((str[i - 1] >= 97) && (str[i - 1] <= 122))))
			if (str[i] >= 97 && str[i] <= 122)
				str[i] -= 32;
		i++;
	}
	return (str);
}
