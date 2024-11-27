/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SpellBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victoirevaudaine <victoirevaudaine@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 20:06:02 by victoirevau       #+#    #+#             */
/*   Updated: 2024/11/27 20:13:14 by victoirevau      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPELLBOOK_HPP
#define SPELLBOOK_HPP

#include <iostream>
#include <map>
#include "ASpell.hpp"

class SpellBook {
	private:
		std::map<std::string, ASpell *> Book;
		SpellBook(SpellBook const &copy);
		SpellBook &operator=(SpellBook const &rhs);
	public:
		SpellBook();
		~SpellBook();
		void learnSpell(ASpell *);
		void forgetSpell(std::string const &);
		ASpell* createSpell(std::string const &);
};

#endif