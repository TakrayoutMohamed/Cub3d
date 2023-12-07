/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   release.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenheni <abenheni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 13:30:46 by abenheni          #+#    #+#             */
/*   Updated: 2023/12/04 13:30:47 by abenheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "render_map.h"

int	release(int key, t_data *info)
{
	t_player	*player;

	player = &info->_player;
	if (key == KEY_A || key == KEY_D || key == KEY_W || key == KEY_S)
	{
		player->walk_direction = 0;
	}
	if (key == RIGHT_ARROW || key == LEFT_ARROW)
		player->turn_direction = 0;
	return (1);
}
