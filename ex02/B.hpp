/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgeorgia <kgeorgia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 14:36:42 by kgeorgia          #+#    #+#             */
/*   Updated: 2021/10/21 14:47:21 by kgeorgia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef B_HPP
# define B_HPP

# include "Base.hpp"

class B: public Base
{
public:
	B() {}
	B( B const &other );
	~B() {}

	B const &operator=( B const &other );
};

#endif