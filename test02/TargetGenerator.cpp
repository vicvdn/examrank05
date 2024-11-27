/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TargetGenerator.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victoirevaudaine <victoirevaudaine@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 20:21:58 by victoirevau       #+#    #+#             */
/*   Updated: 2024/11/27 20:28:03 by victoirevau      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator(){}

TargetGenerator::~TargetGenerator(){
	for(std::map<std::string, ATarget *>::iterator it = targetList.begin(); it != targetList.end(); it++)
	{
		delete it->second;
		targetList.erase(it);
	}
	targetList.clear();
}

void TargetGenerator::learnTargetType(ATarget* target){
	if (target)
	{
		targetList[target->getType()] = target->clone();
	}
}

void TargetGenerator::forgetTargetType(std::string const &targetType){
	if (targetList.find(targetType) != targetList.end())
	{
		delete targetList.find(targetType)->second;
		targetList.erase(targetList.find(targetType));
	}
}

ATarget* TargetGenerator::createTarget(std::string const &targetName){
	ATarget *tmp = NULL;
	if (targetList.find(targetName) != targetList.end())
		tmp = targetList[targetName];
	return tmp;
}