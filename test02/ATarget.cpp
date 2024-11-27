/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victoirevaudaine <victoirevaudaine@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 19:32:48 by victoirevau       #+#    #+#             */
/*   Updated: 2024/11/27 19:39:27 by victoirevau      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ATarget.hpp"

ATarget::ATarget() : type(""){
}

ATarget::~ATarget(){
}

ATarget::ATarget(std::string typo) : type(typo) {
}

ATarget::ATarget(ATarget const &copy){
	*this = copy;
}

ATarget &ATarget::operator=(ATarget const &rhs){
	this->type = rhs.getType();
	return (*this);
}

std::string const &ATarget::getType() const{
	return (this->type);
}

void ATarget::getHitBySpell(ASpell const &spell) const {
	std::cout << type << " has been " << spell.getEffects() << "!" << std::endl;
}