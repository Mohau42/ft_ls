/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   opendir.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoloi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/30 12:15:49 by mmoloi            #+#    #+#             */
/*   Updated: 2019/09/03 08:32:07 by mmoloi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// open a Directory stream//

#include <sys/types.h>
#include <dirent.h>
#include <libgen.h>

int		struct
{
 DIR			*dir;
 struct dirent  *dp;

 	if ((dir = opendir(".")) == NULL)
	{
		perror("cannot open .");
		exit (1);
	}
	while ((dp = readir (dir)) != NULL)
}


int		main(int c, char **args)
{
	DIR *dir;
	struct dirent *dent;
	char buffer[50];
	strcpy(buffer, args[1]);
	dir = opendir(buffer);
	if (dir != NULL)
	{
		while ((dent=readdir(dir)) != NULL)
			printF(dent->d_name);
	}
	close(dir);
}
