/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victoirevaudaine <victoirevaudaine@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 18:45:15 by victoirevau       #+#    #+#             */
/*   Updated: 2024/11/27 20:31:10 by victoirevau      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WARLOCK_HPP
# define WARLOCK_HPP

#include <iostream>
#include <map>
#include "ATarget.hpp"
#include "SpellBook.hpp"

class Warlock {
	private:
		std::string name;
		std::string title;
		SpellBook knownSpells;
		Warlock();
		Warlock(Warlock const &copy);
		Warlock &operator=(Warlock const &rhs);
	public:
		Warlock(std::string nom, std::string titre);
		~Warlock();
		std::string const &getName(void)const;
		std::string const &getTitle(void)const;
		void setTitle(std::string const &titre);
		void introduce() const;
		void learnSpell(ASpell *spell);
		void forgetSpell(std::string spellName);
		void launchSpell(std::string spellName, ATarget &target);
};

#endif