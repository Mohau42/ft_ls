/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stat2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoloi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 14:05:16 by mmoloi            #+#    #+#             */
/*   Updated: 2019/09/09 14:54:53 by mmoloi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <sys/types.h>
#include <sys/stat.h>

int		main(int argc, char **argv)
{
	struct stat buf;
	char birthtimespec[100];

	stat("my_file.txt", &buf);

	printf("st_mode = %o\n", buf.st_mode);
	strcpy(birthtimespec, ctime(&buf.st_birthtimespec));
	printf("st_birthtimespec = %s\n", birthtimespec);
	return (0);
}
