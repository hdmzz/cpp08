/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdamitzi <hdamitzi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 17:45:07 by hdamitzi          #+#    #+#             */
/*   Updated: 2023/12/13 21:19:26 by hdamitzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP
# include <iterator>
# include <algorithm>
# include <stdexcept>

template <typename T>
typename T::const_iterator easyfind(T const & tab, const int toFind) {
    typename T::const_iterator it;

    it = std::find(tab.begin(), tab.end(), toFind);
    if (it == tab.end()) {
        throw (std::out_of_range("The element is not present in the container"));
    }
    return (it);
}

#endif
