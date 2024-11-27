/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victoirevaudaine <victoirevaudaine@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 19:04:27 by victoirevau       #+#    #+#             */
/*   Updated: 2024/11/27 19:37:51 by victoirevau      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASPELL_HPP
#define ASPELL_HPP

#include <iostream>
#include "ATarget.hpp"

class ATarget;

class ASpell {
	protected:
		std::string name;
		std::string effects;
	public:	
		ASpell();
		virtual ~ASpell();
		ASpell(std::string nom, std::string eff);
		ASpell(ASpell const &copy);
		ASpell &operator=(ASpell const &rhs);
		std::string const &getName() const;
		std::string const &getEffects() const;
		virtual ASpell *clone(void) const = 0;
		void launch(ATarget const &target);
};

#endif