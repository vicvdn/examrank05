/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brickwall.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victoirevaudaine <victoirevaudaine@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 16:27:02 by victoirevau       #+#    #+#             */
/*   Updated: 2024/11/19 21:01:26 by victoirevau      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRICKWALL_HPP
# define BRICKWALL_HPP

#include <iostream>
#include "ATarget.hpp"

class BrickWall : public ATarget {
	public:
		BrickWall();
		~BrickWall();
		BrickWall *clone(void) const;
};

#endif