
************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stat.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoloi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 14:43:28 by mmoloi            #+#    #+#             */
/*   Updated: 2019/09/09 10:39:48 by mmoloi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <string.h>
#include <time.h>

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
