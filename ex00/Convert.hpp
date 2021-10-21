/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgeorgia <kgeorgia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 14:16:32 by kgeorgia          #+#    #+#             */
/*   Updated: 2021/10/20 15:15:41 by kgeorgia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
# define CONVERT_HPP

# include <exception>
# include <iostream>
# include <string>
# include <cmath>

class Convert
{
private:
	std::string input;
public:
	Convert( const char *Input ): input(Input) {}
	Convert( Convert const &other );
	~Convert() {}

	Convert const &operator=( Convert const &other );

	char	getChar( void ) const;
	int		getInt( void ) const;
	float	getFloat( void ) const;
	double	getDouble( void ) const;

	class NonDisplayableException: public std::exception
	{
		virtual const char *what() const throw();
	};
	
	class ImpossibleException: public std::exception
	{
		virtual const char *what() const throw();
	};
};

std::ostream	&operator<<( std::ostream &out, Convert const &conv );

#endif