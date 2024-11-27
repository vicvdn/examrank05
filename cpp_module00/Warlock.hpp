/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victoirevaudaine <victoirevaudaine@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 15:24:29 by victoirevau       #+#    #+#             */
/*   Updated: 2024/11/18 15:39:04 by victoirevau      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WARLOCK_HPP
#define WARLOCK_HPP

#include <iostream>

class Warlock {
	private:
		std::string name;
		std::string title;
		Warlock();
		Warlock(Warlock const& copy);
		Warlock &operator=(Warlock const &rhs);
	public:
		std::string const &getName(void) const;
		std::string const &getTitle(void) const;
		void setTitle(std::string const &titre);
		Warlock(std::string nom, std::string titre);
		~Warlock();
		void introduce() const;
};

#endif