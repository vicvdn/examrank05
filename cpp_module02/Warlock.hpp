/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victoirevaudaine <victoirevaudaine@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 15:24:29 by victoirevau       #+#    #+#             */
/*   Updated: 2024/11/18 16:35:17 by victoirevau      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WARLOCK_HPP
#define WARLOCK_HPP

#include <iostream>
#include "ASpell.hpp"
#include <map>

class Warlock {
	private:
		std::string name;
		std::string title;
		std::map<std::string, ASpell *> knownSpells;
		Warlock();
		Warlock(Warlock const& copy);
		Warlock &operator=(Warlock const &rhs);
	public:
		std::string const &getName(void) const;
		std::string const &getTitle(void) const;
		void setTitle(std::string const &titre);
		Warlock(std::string nom, std::string titre);
		~Warlock();
		void introduce() const;
		void learnSpell(ASpell *spell);
		void forgetSpell(std::string spellName);
		void launchSpell(std::string spellName, ATarget &target);
};

#endif