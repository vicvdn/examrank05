/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvaudain <vvaudain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 16:08:13 by vvaudain          #+#    #+#             */
/*   Updated: 2024/11/13 16:24:07 by vvaudain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WARLOCK_HPP
#define WARLOCK_HPP

#include <iostream>

class Warlock{
  
    private:
        std::string _name;
        std::string _title;
        Warlock();
        Warlock(Warlock const &copy);
        Warlock &operator=(Warlock const &rhs);
    
    public:
        Warlock(std::string name, std::string title);
        ~Warlock();
        std::string const &getName(void) const;
        std::string const &getTitle(void) const;
        void setTitle(std::string const &str);
        void introduce() const;
};

#endif