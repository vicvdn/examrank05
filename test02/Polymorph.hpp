/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Polymorph.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victoirevaudaine <victoirevaudaine@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 20:02:48 by victoirevau       #+#    #+#             */
/*   Updated: 2024/11/27 20:03:08 by victoirevau      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POLYMORPH_HPP
#define POLYMORPH_HPP

#include <iostream>
#include "ASpell.hpp"

class Polymorph : public ASpell {
	public:
		Polymorph();
		~Polymorph();	
		Polymorph *clone(void) const;	
};

#endif