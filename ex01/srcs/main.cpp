/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdamitzi <hdamitzi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 03:34:39 by hdamitzi          #+#    #+#             */
/*   Updated: 2023/12/21 02:33:55 by hdamitzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Span.hpp"
#include <list>
int main()
{
	{
		std::cout << "--Subject Test--" << std::endl;		
		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	{	
		std::cout << "--More Test--" << std::endl;
		try 
		{
			Span s(5);
			s.addNumber(2);
			s.addNumber(4);
			s.addNumber(6);
			s.addNumber(8);
			s.addNumber(10);
			std::cout << "shortest span: " << s.shortestSpan() << std::endl;
			std::cout << "longest span : " << s.longestSpan() << std::endl;
		} 
		catch (std::exception& e) 
		{
			std::cerr << "EXCEPTION: " << e.what() << std::endl;
		}
		std::cout << std::endl;
		try 
		{
			Span s(5);
			s.addNumber(2);
			s.addNumber(4);
			s.addNumber(6);
			s.addNumber(8);
			s.addNumber(10);
			s.addNumber(12);
			std::cout << "shortest span: " << s.shortestSpan() << std::endl;
			std::cout << "longest span : " << s.longestSpan() << std::endl;
		} 
		
		catch (std::exception& e) 
		{
			std::cerr << "EXCEPTION: " << e.what() << std::endl;
		}

		std::cout << std::endl;

		try 
		{
			Span s(5);
			s.addNumber(2);
			std::cout << "shortest span: " << s.shortestSpan() << std::endl;
			std::cout << "longest span : " << s.longestSpan() << std::endl;
		} 
		catch (std::exception& e) 
		{
			std::cerr << "EXCEPTION: " << e.what() << std::endl;
		}
		
		try 
		{
			Span s(1);
			s.addNumber(2);
			std::cout << "shortest span: " << s.shortestSpan() << std::endl;
			std::cout << "longest span : " << s.longestSpan() << std::endl;
		} 
		
		catch (std::exception& e) 
		{
			std::cerr << "EXCEPTION: " << e.what() << std::endl;
		}

		std::cout << std::endl;

		std::vector<int> big(10000);
		
		for (int i = 0; i < 10000; ++i) big[i] = i;
		
		try 
		{
			Span s(10000);
			s.fillSpan(big.begin(), big.end());
			std::cout << "shortest span: " << s.shortestSpan() << std::endl;
			std::cout << "longest span : " << s.longestSpan() << std::endl;
		} 
		
		catch (std::exception& e) 
		{
			std::cerr << "EXCEPTION: " << e.what() << std::endl;
		}
	}
	return 0;
}

