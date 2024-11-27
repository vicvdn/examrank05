/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SpellBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victoirevaudaine <victoirevaudaine@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 20:09:41 by victoirevau       #+#    #+#             */
/*   Updated: 2024/11/27 20:38:52 by victoirevau      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SpellBook.hpp"

SpellBook::SpellBook(){}

SpellBook::SpellBook(SpellBook const &copy){
	*this = copy;
}

SpellBook &SpellBook::operator=(SpellBook const &rhs){
	Book = rhs.Book;
	return (*this);
}

SpellBook::~SpellBook(){
	for(std::map<std::string, ASpell *>::iterator it = Book.begin(); it != Book.end(); it++)
	{
		delete it->second;
		Book.erase(it);
	}
	Book.clear();
}

void SpellBook::learnSpell(ASpell *spell){
	if (spell)
	{
		Book[spell->getName()] = spell->clone();
	}	
}

void SpellBook::forgetSpell(std::string const &spellName){
	if (Book.find(spellName) != Book.end())
	{
		delete Book.find(spellName)->second;
		Book.erase(Book.find(spellName));
	}
}

ASpell* SpellBook::createSpell(std::string const &spellName){
	ASpell *tmp = NULL;
	if (Book.find(spellName) != Book.end())
		tmp = Book[spellName];
	return tmp;
}