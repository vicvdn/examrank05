/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victoirevaudaine <victoirevaudaine@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 16:05:03 by victoirevau       #+#    #+#             */
/*   Updated: 2024/11/18 16:54:13 by victoirevau      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ATarget.hpp"
#include "ASpell.hpp"

ATarget::ATarget() : type("") {	
}

ATarget::~ATarget(){
}

ATarget::ATarget(ATarget const &copy){
	*this = copy;
}

ATarget::ATarget(std::string t) : type(t) {
}

ATarget &ATarget::operator=(ATarget const &rhs){
	this->type = rhs.getType();
	return *this;
}

std::string const &ATarget::getType(void) const{
	return (this->type);
}

void ATarget::getHitBySpell(ASpell const &spell) const {
	std::cout << this->type << " has been " << spell.getEffects() << "!" <<std::endl;
}