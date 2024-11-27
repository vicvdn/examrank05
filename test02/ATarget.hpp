/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victoirevaudaine <victoirevaudaine@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 19:29:34 by victoirevau       #+#    #+#             */
/*   Updated: 2024/11/27 19:39:23 by victoirevau      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ATARGET_HPP
#define ATARGET_HPP

#include <iostream>
#include "ASpell.hpp"

class ASpell;

class ATarget {
	protected:
		std::string type;
	public:	
		ATarget();
		virtual ~ATarget();
		ATarget(std::string typo);
		ATarget(ATarget const &copy);
		ATarget &operator=(ATarget const &rhs);
		std::string const &getType() const;
		virtual ATarget *clone(void) const = 0;
		void getHitBySpell(ASpell const &spell) const;
};

#endif