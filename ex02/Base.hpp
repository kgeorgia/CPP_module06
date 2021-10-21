/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgeorgia <kgeorgia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 15:24:12 by kgeorgia          #+#    #+#             */
/*   Updated: 2021/10/21 15:30:30 by kgeorgia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

# include <iostream>
# include <cstdlib>
# include <ctime>

class Base
{
public:
	virtual ~Base() {}
};

Base	*generate(void);
void	identify(Base* p);
void	identify(Base& p);

#endif