/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victoirevaudaine <victoirevaudaine@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 16:04:59 by victoirevau       #+#    #+#             */
/*   Updated: 2024/11/18 16:52:22 by victoirevau      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ATARGET_HPP
# define ATARGET_HPP

#include <iostream>

class ASpell;

class ATarget {
	protected:
		std::string type;
	public:
		ATarget();
		virtual ~ATarget();	
		ATarget(ATarget const &copy);	
		ATarget(std::string type);
		ATarget &operator=(ATarget const &rhs);
		std::string const &getType(void) const;
		virtual ATarget *clone(void) const = 0;
		void getHitBySpell(ASpell const &spell) const;
};

#endif