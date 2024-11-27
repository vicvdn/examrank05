/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victoirevaudaine <victoirevaudaine@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 15:47:54 by victoirevau       #+#    #+#             */
/*   Updated: 2024/11/18 16:52:11 by victoirevau      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASPELL_HPP
# define ASPELL_HPP

#include <iostream>

class ATarget;

class ASpell {
	protected:
		std::string name;
		std::string effects;
	public:
		ASpell();
		virtual ~ASpell();	
		ASpell(ASpell const &copy);	
		ASpell(std::string nom, std::string eff);
		ASpell &operator=(ASpell const &rhs);
		std::string const &getName(void) const;
		std::string const &getEffects(void) const;
		virtual ASpell *clone(void) const = 0;
		void launch(ATarget const &target) const;
};

#endif