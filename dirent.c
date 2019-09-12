/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dirent.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoloi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 11:33:13 by mmoloi            #+#    #+#             */
/*   Updated: 2019/09/12 13:55:53 by mmoloi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>
#include <sys/types.h>

int		main(int argc, char **argv)
{
	DIR *dir;
	struct dirent *sd;

	dir = opendir(argv[1]);

	if (dir == NULL)
	{
		printf("Error unable to read directory.\n");
		exit (1);
	}

	while ( (sd=readdir(dir)) != NULL)
	{
		printf(">> %hu\n", sd->d_namlen);
	}

	closedir(dir);
	return (0);
}
