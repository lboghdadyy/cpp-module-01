/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaghdad <sbaghdad@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 16:53:21 by sbaghdad          #+#    #+#             */
/*   Updated: 2025/11/26 16:06:36 by sbaghdad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# include "HumanA.hpp"

void    HumanA::attack(void)
{
    std::cout << this->name << " attacks with their " << this->w1.getType()  << std::endl;
}

HumanA::HumanA(std::string str, Weapon &wep): w1(wep)
{
	this->name = str;
}
