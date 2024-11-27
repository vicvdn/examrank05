/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TargetGenerator.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victoirevaudaine <victoirevaudaine@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 20:18:59 by victoirevau       #+#    #+#             */
/*   Updated: 2024/11/27 20:23:59 by victoirevau      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TARGETGENERATOR_HPP
#define TARGETGENERATOR_HPP

#include <iostream>
#include <map>
#include "ATarget.hpp"

class TargetGenerator {
	private:
		TargetGenerator(TargetGenerator const &copy);
		TargetGenerator &operator=(TargetGenerator const &rhs);
		std::map <std::string, ATarget *> targetList;
	public:	
		TargetGenerator();
		~TargetGenerator();
		void learnTargetType(ATarget*);
		void forgetTargetType(std::string const &);
		ATarget* createTarget(std::string const &);
};

#endif