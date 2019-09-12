/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoloi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 12:03:06 by mmoloi            #+#    #+#             */
/*   Updated: 2019/09/09 12:24:12 by mmoloi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>


struct emp 
{
	int number;
	char name[20];
	float salary;
};

int		main(int argc, char **argv)
{
	struct emp e = {1000, "Mohau", 50000};

	printf(" emp number :%d\n", e.number);
	printf("emp name :%s\n", e.name);
	printf("emp salary :%f", e.salary); 
	
	return (0);
}

