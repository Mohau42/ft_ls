/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoloi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 11:48:49 by mmoloi            #+#    #+#             */
/*   Updated: 2019/09/12 14:13:26 by mmoloi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <dirent.h>

    int main (int c, char *v[]) {
        struct dirent *d;
        DIR *dir;

        if (c < 2) {
            printf ("Usage: testprog <dirname>\n");
            return 1;
        }
        dir = opendir (v[1]);
        if (dir == NULL) {
            printf ("Cannot open directory '%s'\n", v[1]);
            return 1;
        }

        while ((d = readdir(dir)) != NULL) {
            printf ("[%hu]\n", d->st_uid);
        }
        closedir (dir);
        return 0;
    }
