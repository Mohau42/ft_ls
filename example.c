/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   example.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoloi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 10:40:53 by mmoloi            #+#    #+#             */
/*   Updated: 2019/09/09 10:48:32 by mmoloi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <dirent.h>
#include <sys/types.h>
#include <string.h>
#include <libgen.h>
#include <stdlib.h>


int		main(int argc, char **argv)
{
	DIR *dir;
	struct dirent *dp;

	if ((dir = opendir (".")) == NULL)
	{
		perror ("cannot open .");
		exit (1);
	}
	while ((dp = readdir (dir)) != NULL)
	{
		printf(">> %s\n", dp->d_name);
	}

	closedir(dir);
	return(0);
}
