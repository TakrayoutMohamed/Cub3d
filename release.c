/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   release.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohtakra <mohtakra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 13:30:46 by abenheni          #+#    #+#             */
/*   Updated: 2023/12/08 15:20:04 by mohtakra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "render_map.h"

int	release(int key, t_data *info)
{
	t_player	*player;

	(void) key;
	player = &info->_player;
	player->walk_direction = 0;
	player->turn_direction = 0;
	return (0);
}
