/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdamitzi <hdamitzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 22:58:37 by hdamitzi          #+#    #+#             */
/*   Updated: 2023/12/29 15:55:04 by hdamitzi         ###   ########.fr       */
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

//when you call iterqtor of the MutantStack class it corresponds to an iterator of the std::deque class (double ended queue?)
    typedef typename std::stack<T>::container_type::iterator iterator;
    
    iterator begin() {
        return this->c.begin();
    }

    iterator end() {
        return this->c.end();
    }
};

#endif
