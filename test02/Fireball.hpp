/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fireball.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victoirevaudaine <victoirevaudaine@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 20:01:14 by victoirevau       #+#    #+#             */
/*   Updated: 2024/11/27 20:01:50 by victoirevau      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIREBALL_HPP
#define FIREBALL_HPP

#include <iostream>
#include "ASpell.hpp"

class Fireball : public ASpell {
	public:
		Fireball();
		~Fireball();	
		Fireball *clone(void) const;	
};

#endif