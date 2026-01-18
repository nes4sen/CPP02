/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosahimi <nosahimi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 21:55:09 by nosahimi          #+#    #+#             */
/*   Updated: 2026/01/18 23:08:07 by nosahimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_Fract = 8;


Fixed::Fixed() : _RawBits(0)
{
	std::cout << "Default constructor called\n";
}

Fixed::Fixed(const Fixed &CopyObj)
{
	std::cout << "Copy constructor called\n";
	*this = CopyObj;
}

Fixed::Fixed(const int value)
{
	std::cout << "Float constructor called\n";
	_RawBits = value << _Fract;
}

Fixed::Fixed(const float value)
{
    std::cout << "Float constructor called\n";
    _RawBits = roundf(value * (1 << _Fract));
}


Fixed &Fixed::operator=(const Fixed &other)
{
	std::cout << "Copy assignment operator called \n";
	if (this != &other)
	{
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





float Fixed::toFloat(void) const
{

	return (float)_RawBits / (1 << _Fract);
}

int Fixed::toInt(void) const
{
	return (_RawBits >> _Fract);
}

std::ostream &operator<<( std::ostream &o, Fixed const &i )
{
	o << i.toFloat();
	return o;
}
