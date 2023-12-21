/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdamitzi <hdamitzi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 21:19:53 by hdamitzi          #+#    #+#             */
/*   Updated: 2023/12/21 04:39:22 by hdamitzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/easyfind.hpp"
#include <iostream>
#include <list>
#include <deque>
#include <vector>

int main () {
	std::list<int>	l;

	l.push_back(42);
	l.push_back(21);
	l.push_back(1337);
	l.push_back(84);

	try {
		easyfind(l, 21);
	}
	catch (std::exception& e) {
		std::cerr << "Exception : " << e.what() << std::endl; 
	}
	try {
		easyfind(l, 27);
	}
	catch (std::exception& e) {
		std::cerr << "Exception : " << e.what() << std::endl; 
	}	
	return 0;
}
