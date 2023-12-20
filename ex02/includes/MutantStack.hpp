/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdamitzi <hdamitzi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 22:58:37 by hdamitzi          #+#    #+#             */
/*   Updated: 2023/12/20 22:22:08 by hdamitzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP
# include <algorithm>
# include <stack>
# include <ostream>

template<typename T, typename C = std::deque<T> >
class MutantStack : std::stack<T>
{
public:
    MutantStack() {};
    MutantStack(MutantStack const & src) : std::stack<T>(src) {
        *this = src;
    };

    ~MutantStack() {
        this->c.clear();
    };

    MutantStack & operator=(MutantStack const & rhv) {
        if (this != &rhv) {
            this->c = rhv.c;
        }
        return (*this);
    };
    
    typename std::stack<T>::iterator begin() {
        return this->c.begin();
    }

    typename std::stack<T>::iterator end() {
        return this->c.end();
    }
};

#endif
