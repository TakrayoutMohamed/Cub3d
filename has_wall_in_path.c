/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   has_wall_in_path.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenheni <abenheni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 13:30:06 by abenheni          #+#    #+#             */
/*   Updated: 2023/12/04 13:30:07 by abenheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "render_map.h"

bool	has_wall_in_path(t_data *info, double x_to_move, double y_to_move)
{
	double	t;
	double	x;
	double	y;
	double	distance;

	t = 0;
	distance = sqrt(pow(x_to_move, 2) + pow(y_to_move, 2));
	while (t <= distance)
	{
		x = info->_player.x + t * x_to_move / distance;
		y = info->_player.y + t * y_to_move / distance;
		if (is_wall(info, x, y))
			return (true);
		t += 0.1;
	}
	return (false);
}
