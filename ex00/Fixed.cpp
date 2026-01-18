/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosahimi <nosahimi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 20:29:53 by nosahimi          #+#    #+#             */
/*   Updated: 2026/01/18 18:58:25 by nosahimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int const Fixed::_Fract = 8;

Fixed::Fixed() : _RawBits(0)
{
	std::cout << "Default constructor called\n";
}

Fixed::Fixed(const Fixed &CopyObj)
{
	std::cout << "Copy constructor called\n";
	*this = CopyObj;
}

Fixed& Fixed::operator=(const Fixed &other)
{
	std::cout << "Copy assignment operator called \n";
	// 1. Guard against self-assignment
    if (this != &other) 
	{
        // 2. Actually copy the data
    	this->_RawBits = other.getRawBits();
    }
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called \n";
}


int Fixed::getRawBits(void) const 
{
	std::cout << "getRawBits member function called\n";
	return (_RawBits);
}


void Fixed::setRawBits(int const raw)
{
	_RawBits = raw;
}
