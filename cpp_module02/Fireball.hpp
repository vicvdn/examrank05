/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fireball.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victoirevaudaine <victoirevaudaine@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 16:17:30 by victoirevau       #+#    #+#             */
/*   Updated: 2024/11/19 20:58:51 by victoirevau      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIREBALL_HPP
# define FIREBALL_HPP

#include <iostream>
#include "ASpell.hpp"

class Fireball : public ASpell {
	public:
		Fireball();
		~Fireball();
		Fireball *clone(void) const;
};

#endif