/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdamitzi <hdamitzi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 13:48:15 by hdamitzi          #+#    #+#             */
/*   Updated: 2023/12/19 21:02:18 by hdamitzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP
# include <iostream>
# include <vector>
# include <algorithm>
class Span
{
private:
    unsigned int _maxSize;
    std::vector<int> _numbers;
public:
    Span();
    Span(unsigned int N);
    Span(Span const & src);
    ~Span();

    class TooManyNumbersInSpan : public std::exception {
        public:
            virtual const char * what() const throw();
    };

    class NotEnoughElementsInSPan : public std::exception {
        public:
            virtual const char * what() const throw();
    };

    Span & operator=(Span const & rhv);
    void addNumber(int toAdd);
    unsigned int shortestSpan() const;
    unsigned int longestSpan()const;
};

#endif
