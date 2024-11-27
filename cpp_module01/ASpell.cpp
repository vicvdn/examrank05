/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victoirevaudaine <victoirevaudaine@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 15:59:57 by victoirevau       #+#    #+#             */
/*   Updated: 2024/11/18 16:53:55 by victoirevau      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ASpell.hpp"
#include "ATarget.hpp"

ASpell::ASpell() : name(""), effects(""){
}

ASpell::ASpell(std::string nom, std::string eff) : name(nom), effects(eff) {
}

ASpell &ASpell::operator=(ASpell const &rhs){
	if (this != &rhs)
	{
		this->name = rhs.getName();
		this->effects = rhs.getEffects();
	}
	return *this;
}

ASpell::ASpell(ASpell const &copy){
	*this = copy;
}

ASpell::~ASpell(){
}

std::string const &ASpell::getName(void) const{
	return (this->name);
}

std::string const &ASpell::getEffects(void) const{
	return (this->effects);
}

void ASpell::launch(ATarget const &target) const {
	target.getHitBySpell(*this);
}