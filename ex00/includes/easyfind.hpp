/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdamitzi <hdamitzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 17:45:07 by hdamitzi          #+#    #+#             */
/*   Updated: 2023/12/29 15:52:32 by hdamitzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP
# include <iterator>
# include <algorithm>
# include <stdexcept>
# include <iostream>

template <typename T>
void easyfind(T const & tab, int toFind) {
    typename T::const_iterator it = std::find(tab.begin(), tab.end(), toFind);
    if (it == tab.end()) {
        throw (std::out_of_range("The element is not present in the container"));
    }
    else {
        std::cout << "Element " << *it << " found" << std::endl;
    }
}

#endif
