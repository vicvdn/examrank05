/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victoirevaudaine <victoirevaudaine@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 18:49:21 by victoirevau       #+#    #+#             */
/*   Updated: 2024/11/27 20:36:29 by victoirevau      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Warlock.hpp"

Warlock::Warlock() : name(""), title(""){
	std::cout << this->name << ": This looks like another boring day." << std::endl;
	
}

Warlock::Warlock(std::string nom, std::string titre) : name(nom), title(titre){
	std::cout << this->name << ": This looks like another boring day." << std::endl;
}

Warlock::Warlock(Warlock const &copy)
{
	*this = copy;
}

Warlock &Warlock::operator=(Warlock const &rhs){
	this->name = rhs.getName();
	this->title = rhs.getTitle();
	return (*this);
}

Warlock::~Warlock(){
	std::cout << this->name << ": My job here is done!" << std::endl;
}

std::string const &Warlock::getName(void)const{
	return (this->name);
}

std::string const &Warlock::getTitle(void)const{
	return (this->title);
}

void Warlock::setTitle(std::string const &titre){
	this->title = titre;
}

void Warlock::introduce() const{
	std::cout << name << ": I am " << name << ", " << title << "!" <<std::endl;
}

void Warlock::learnSpell(ASpell *spell){
	knownSpells.learnSpell(spell);
}
void Warlock::forgetSpell(std::string spellName){
	knownSpells.forgetSpell(spellName);
}
void Warlock::launchSpell(std::string spellName, ATarget &target){
	if (knownSpells.createSpell(spellName))
		knownSpells.createSpell(spellName)->launch(target);
}