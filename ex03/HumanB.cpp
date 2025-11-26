/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaghdad <sbaghdad@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 16:53:27 by sbaghdad          #+#    #+#             */
/*   Updated: 2025/11/26 16:20:05 by sbaghdad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "HumanB.hpp"

void    HumanB::attack(void)
{
    if(w1)
        std::cout << this->name << " attacks with their " << this->w1->getType() << std::endl;
}

HumanB::HumanB(std::string name)
{
    this->w1 = NULL;
    this->name = name;
}

void HumanB::setWeapon(Weapon *wep)
{
    this->w1 = wep;
}
