/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgeorgia <kgeorgia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 14:36:45 by kgeorgia          #+#    #+#             */
/*   Updated: 2021/10/21 15:15:10 by kgeorgia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef A_HPP
# define A_HPP

# include "Base.hpp"

class A: public Base
{
public:
	A() {}
	A( A const &other );
	~A() {}

	A const &operator=( A const &other );
};

#endif