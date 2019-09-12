/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Box.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoloi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 15:06:39 by mmoloi            #+#    #+#             */
/*   Updated: 2019/09/09 10:33:14 by mmoloi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <dirent.h>
#include <stdlib.h>

int		main(int argc, char **argv)
{
	DIR  *pointer = NULL;
	struct dirent *box;

	pointer = opendir("/home/ba/unix");
	if (pointer == NULL)
	{
		printf(stderr, "can't open Dir!\n");
		exit(1);
	}
	box = readdir(pointer);

	while (box != NULL)
	{
		printf("name=%s\n", box->d_name);
		box = readdir(pointer);
	}

	closedir(dir);
	return(0);
}
