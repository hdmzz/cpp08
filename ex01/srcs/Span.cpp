/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdamitzi <hdamitzi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 19:25:30 by hdamitzi          #+#    #+#             */
/*   Updated: 2023/12/19 21:03:44 by hdamitzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Span.hpp"

/********************************************************************
 *                          Canonical Form
 * ******************************************************************/

Span::Span() : _maxSize(0) {
    return ;
}

Span::Span(unsigned int N) : _maxSize(N) {
    return ;
}

Span::Span(Span const & src) {
    *this = src;
}

Span::~Span() {
    return ;
}

Span & Span::operator=(Span const & rhv) {
    if (this != &rhv) {
        this->_maxSize = rhv._maxSize;
        this->_numbers.assign(rhv._numbers.begin(), rhv._numbers.end());
    }
    return (*this);
}

/********************************************************************
 *                          Exception
 * ******************************************************************/
const char * Span::TooManyNumbersInSpan::what(void) const throw () {
    return ("Too many Numbers in span");
}

const char * Span::NotEnoughElementsInSPan::what() const throw () {
    return ("Not enough elements in Span to get the smallest span");
}

/********************************************************************
 *                          Member function
 * ******************************************************************/

unsigned int Span::shortestSpan() const {
    if (this->_numbers.size() < 2)
        throw (Span::NotEnoughElementsInSPan());
    std::vector<int> sorted(_numbers);
    std::sort(sorted.begin(), sorted.end());
    int smallestSpan = sorted[1] - sorted[0];
    for(unsigned int i = 1; i < sorted.size() - 1; i++) {
       int currentSpan = sorted[i + 1] - sorted[i];
       if(currentSpan < smallestSpan) {
           smallestSpan = currentSpan;
       }
   }
   return smallestSpan;
}

unsigned int Span::longestSpan() const {
    if (this->_numbers.size() < 2)
        throw (Span::NotEnoughElementsInSPan());
    std::vector<int> sortedSpan(this->_numbers);
    std::sort(sortedSpan.begin(), sortedSpan.end());
    return (sortedSpan[sortedSpan.size() - 1] - sortedSpan[0]);
}

void Span::addNumber(int toAdd) {
    if (this->_numbers.size() >= this->_maxSize)
        throw (Span::TooManyNumbersInSpan());
    this->_numbers.push_back(toAdd);
    return ;
}
