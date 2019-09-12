/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoloi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/03 07:43:04 by mmoloi            #+#    #+#             */
/*   Updated: 2019/09/08 14:43:13 by mmoloi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <dirent.h>

int		ls(char *str)
{
	struct dirent	*d;
	DIR				*dir;
	
	if ((dir = opendir(str)) == NULL)
		return (0);
	while ((d = readdir(dir)))
	{
		printf("%s\n", d->d_name);
	}
}

int		main(int argc, char **argv)
{
	argc = 1;
	ls(argv[1]);
}
