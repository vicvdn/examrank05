/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dummy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victoirevaudaine <victoirevaudaine@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 16:27:02 by victoirevau       #+#    #+#             */
/*   Updated: 2024/11/18 16:27:27 by victoirevau      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DUMMY_HPP
# define DUMMY_HPP

#include <iostream>
#include "ATarget.hpp"

class Dummy : public ATarget {
	public:
		Dummy();
		~Dummy();
		Dummy *clone(void) const;
};

#endif