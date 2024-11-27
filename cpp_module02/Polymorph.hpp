/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Polymorph.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victoirevaudaine <victoirevaudaine@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 16:17:30 by victoirevau       #+#    #+#             */
/*   Updated: 2024/11/19 20:59:36 by victoirevau      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POLYMORPH_HPP
# define POLYMORPH_HPP

#include <iostream>
#include "ASpell.hpp"

class Polymorph : public ASpell {
	public:
		Polymorph();
		~Polymorph();
		Polymorph *clone(void) const;
};

#endif