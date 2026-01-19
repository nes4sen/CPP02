/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosahimi <nosahimi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 21:43:16 by nosahimi          #+#    #+#             */
/*   Updated: 2026/01/19 12:22:22 by nosahimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FIXED_H
# define FIXED_H

# include <iostream>
# include <string>
# include <cmath>


class Fixed
{
	int 				_RawBits;
	static const int	_Fract = 8;

	public:
		Fixed();
		Fixed(const int value);
		Fixed(const float value);
		Fixed(const Fixed &CopyObj);
		~Fixed();

		Fixed &operator=(const Fixed &other);
		
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
		float	toFloat( void ) const;
		int 	toInt( void ) const;
	};
	
	std::ostream &operator<< (std::ostream &o, Fixed const &i );

#endif