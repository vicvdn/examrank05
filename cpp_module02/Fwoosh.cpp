/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fwoosh.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victoirevaudaine <victoirevaudaine@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 16:17:27 by victoirevau       #+#    #+#             */
/*   Updated: 2024/11/18 16:25:52 by victoirevau      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fwoosh.hpp"

Fwoosh::Fwoosh() : ASpell("Fwoosh", "fwooshed") {
}

Fwoosh::~Fwoosh(){
}

Fwoosh *Fwoosh::clone(void) const{
	return (new Fwoosh());
}

