/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BrickWall.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victoirevaudaine <victoirevaudaine@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 20:04:19 by victoirevau       #+#    #+#             */
/*   Updated: 2024/11/27 20:04:43 by victoirevau      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRICKWALL_HPP
#define BRICKWALL_HPP

#include <iostream>
#include "ATarget.hpp"

class BrickWall : public ATarget {
	public:
		BrickWall();
		~BrickWall();	
		BrickWall *clone(void) const;	
};

#endif