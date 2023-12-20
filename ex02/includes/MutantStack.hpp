/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdamitzi <hdamitzi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 22:58:37 by hdamitzi          #+#    #+#             */
/*   Updated: 2023/12/20 23:21:18 by hdamitzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP
# include <algorithm>
# include <stack>
# include <iostream>

template<typename T, typename C = std::deque<T> >
class MutantStack : public std::stack<T, C>
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

//quand on appelle iterator de la classe MutantStack cela correspond a un iterator de la classe std::deque
    typedef typename std::stack<T>::container_type::iterator iterator;
    
    iterator begin() {
        return this->c.begin();
    }

    iterator end() {
        return this->c.end();
    }
};

#endif
