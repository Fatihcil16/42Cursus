/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcil <fcil@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 14:40:10 by fcil              #+#    #+#             */
/*   Updated: 2022/09/11 15:59:43 by fcil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal()
{
	this->setType("WrongCat");
	std::cout << "WrongCat:	Default Constructed" << std::endl;
}

WrongCat::WrongCat(WrongCat const &wc) : WrongAnimal(wc)
{
	*this = wc;
	std::cout << "WrongCat:	Copy Constructed" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat:	Deleted..." << std::endl;
}

WrongCat& WrongCat::operator = (WrongCat const &wc)
{
	this->setType(wc.getType());
	std::cout << "WrongCat:	Assigned." << std::endl;
	return (*this);
}

void WrongCat::makeSound(void) const
{
	std::cout << "WrongCat:	MOO" << std::endl;
}
