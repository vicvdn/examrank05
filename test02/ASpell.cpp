/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victoirevaudaine <victoirevaudaine@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 19:08:55 by victoirevau       #+#    #+#             */
/*   Updated: 2024/11/27 19:39:33 by victoirevau      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ASpell.hpp"

ASpell::ASpell() : name(""), effects("") {
}

ASpell::~ASpell(){
}

ASpell::ASpell(std::string nom, std::string eff) : name(nom), effects(eff) {
}

ASpell::ASpell(ASpell const &copy){
	*this = copy;
}

ASpell &ASpell::operator=(ASpell const &rhs){
	this->name = rhs.getName();
	this->effects = rhs.getEffects();
	return (*this);
}

std::string const &ASpell::getName() const{
	return (this->name);
}

std::string const &ASpell::getEffects() const{
	return (this->effects);	
}

void ASpell::launch(ATarget const &target){
	target.getHitBySpell(*this);
}