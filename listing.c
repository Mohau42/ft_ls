/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   listing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoloi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 11:13:48 by mmoloi            #+#    #+#             */
/*   Updated: 2019/09/12 13:37:10 by mmoloi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <dirent.h>
#include <stdio.h>
#include <stdlib.h>


void	listing(char *str)
{
	struct dirent	*l;
	DIR				*dir;

	if ((dir = opendir(str)) == NULL)
		return;
	while ((l = readdir(dir)))
	{
		printf("%s\n", l->d_name);
	}
	closedir(dir);
}

int		main(int ac, char **av)
{
	listing(av[1]);
	return (0);
}
