/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosahimi <nosahimi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 17:36:06 by nosahimi          #+#    #+#             */
/*   Updated: 2026/01/18 18:58:47 by nosahimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

# include <iostream>
# include <string>

class Fixed
{
	int 				_RawBits;
	static int const	_Fract;
	
	public:
		Fixed();
		Fixed(const Fixed &CopyObj);
		~Fixed();
		Fixed &operator=(const Fixed &other);

		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
};

#endif