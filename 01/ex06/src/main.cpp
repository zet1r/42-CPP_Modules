/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdias-mo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 16:58:33 by jdias-mo          #+#    #+#             */
/*   Updated: 2023/01/27 22:00:38 by jdias-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>
#include <string>

int	main(int ac, char **av)
{
	Harl		h;
	std::string	level(av[1]);

	if (ac != 2)
		return std::cout << "Usage: ./harlFilter <level>\n", 1;
	h.complain(level);
	return 0;
}