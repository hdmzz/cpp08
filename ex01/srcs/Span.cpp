/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdamitzi <hdamitzi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 19:25:30 by hdamitzi          #+#    #+#             */
/*   Updated: 2023/12/16 03:34:16 by hdamitzi         ###   ########.fr       */
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
        this->_numbers.clear();
        this->_numbers = rhv._numbers;
    }
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

int Span::shortestSpan() const {
    if (this->_numbers.size() <= 1)
        throw (Span::NotEnoughElementsInSPan());
    std::vector<int> sortedSpan = this->_numbers;
    std::sort(sortedSpan.begin(), sortedSpan.end());
    return (sortedSpan[1] - sortedSpan[0]);
}

int Span::longestSpan() const {
    if (this->_numbers.size() <= 1)
        throw (Span::NotEnoughElementsInSPan());
    std::vector<int> sortedSpan = this->_numbers;
    std::sort(sortedSpan.begin(), sortedSpan.end());
    return (sortedSpan[sortedSpan.size() - 1] - sortedSpan[sortedSpan.size() - 2]);
}

void Span::addNumber(int toAdd) {
    //add a number to the span
    //if too many numbers in the span fuck off throw exception 
    if (this->_numbers.size() >= this->_maxSize)
        throw (Span::TooManyNumbersInSpan());
    this->_numbers.push_back(toAdd);
    return ;
}
