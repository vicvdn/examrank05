/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victoirevaudaine <victoirevaudaine@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 15:22:52 by victoirevau       #+#    #+#             */
/*   Updated: 2024/11/18 16:47:43 by victoirevau      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Warlock.hpp"

Warlock::Warlock(std::string nom, std::string titre) : name(nom), title(titre){
	std::cout << this->name << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock(){
	std::cout << this->name << ": My job here is done!" << std::endl;
	for (std::map<std::string, ASpell *>::iterator it = this->knownSpells.begin(); it != this->knownSpells.end(); it++)
	{
		delete (it->second);
	}
	knownSpells.clear();
}

std::string const &Warlock::getName(void) const{
	return (this->name);
}

std::string const &Warlock::getTitle(void) const{
	return (this->title);
}

void Warlock::setTitle(std::string const &titre){
	this->title = titre;
}

void Warlock::introduce(void) const{
	std::cout << this->name << ": I am " << this->name << ", " << this->title << "!" << std::endl;
}

void Warlock::learnSpell(ASpell *spell){
	
	if (spell)
	{
		std::string spellName = spell->getName();
		for (std::map<std::string, ASpell *>::iterator it = this->knownSpells.begin(); it != this->knownSpells.end(); it++)
		{
			if (it->first == spellName)
				return ;
		}
		knownSpells[spellName] = spell->clone();
	}
}

void Warlock::forgetSpell(std::string spellName)
{
	if (knownSpells.find(spellName) != knownSpells.end())
	{
		delete knownSpells[spellName];
		knownSpells.erase(knownSpells.find(spellName));
	}
}

void Warlock::launchSpell(std::string spellName, ATarget &target)
{
	if (knownSpells.find(spellName) != knownSpells.end())
		knownSpells[spellName]->launch(target);
}