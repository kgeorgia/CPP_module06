/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgeorgia <kgeorgia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 14:36:57 by kgeorgia          #+#    #+#             */
/*   Updated: 2021/10/21 15:14:48 by kgeorgia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef C_HPP
# define C_HPP

# include "Base.hpp"

class C: public Base
{
public:
	C() {}
	C( C const &other );
	~C() {}

	C const &operator=( C const &other );
};

#endif