/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fwoosh.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victoirevaudaine <victoirevaudaine@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 19:40:08 by victoirevau       #+#    #+#             */
/*   Updated: 2024/11/27 19:44:11 by victoirevau      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FWOOSH_HPP
#define FWOOSH_HPP

#include <iostream>
#include "ASpell.hpp"

class Fwoosh : public ASpell {
	public:
		Fwoosh();
		~Fwoosh();	
		Fwoosh *clone(void) const;	
};

#endif