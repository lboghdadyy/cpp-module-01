/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaghdad <sbaghdad@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 16:53:34 by sbaghdad          #+#    #+#             */
/*   Updated: 2025/11/17 16:53:35 by sbaghdad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Weapon.hpp"

std::string Weapon::getType(void)
{
    return (this->type);
}

void    Weapon::setType(std::string type)
{
    this->type = type;
}

Weapon::Weapon(std::string name)
{
    this->type = name;
}

Weapon::Weapon(void)
{
    
}