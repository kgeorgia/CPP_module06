/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgeorgia <kgeorgia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 15:15:57 by kgeorgia          #+#    #+#             */
/*   Updated: 2021/10/21 15:16:01 by kgeorgia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"

A::A( A const &other )
{
	(void)other;
}

A const		&A::operator=( A const &other )
{
	(void)other;
	return (*this);
}