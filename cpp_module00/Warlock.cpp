/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victoirevaudaine <victoirevaudaine@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 15:22:52 by victoirevau       #+#    #+#             */
/*   Updated: 2024/11/18 15:45:05 by victoirevau      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Warlock.hpp"

Warlock::Warlock(std::string nom, std::string titre) : name(nom), title(titre){
	std::cout << this->name << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock(){
	std::cout << this->name << ": My job here is done!" << std::endl;
}

std::string const &Warlock::getName(void) const{
	return (this->name);
}

std::string const &Warlock::getTitle(void) const{
	return (this->title);
}

void Warlock::setTitle(std::string const &titre){
	this->title = titre;
}

void Warlock::introduce(void) const{
	std::cout << this->name << ": I am " << this->name << ", " << this->title << "!" << std::endl;
}

// int main()
// {
//   Warlock const richard("Richard", "Mistress of Magma");
//   richard.introduce();
//   std::cout << richard.getName() << " - " << richard.getTitle() << std::endl;

//   Warlock* jack = new Warlock("Jack", "the Long");
//   jack->introduce();
//   jack->setTitle("the Mighty");
//   jack->introduce();

//   delete jack;

//   return (0);
// }