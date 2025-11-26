/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaghdad <sbaghdad@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 16:53:46 by sbaghdad          #+#    #+#             */
/*   Updated: 2025/11/21 20:25:27 by sbaghdad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

void    Zombie::announce(void)
{
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void    Zombie::SetName(std::string string)
{
    this->name = string;
}

Zombie::~Zombie()
{
    std::cout << "This Zombie " << this->name << " has been destroyed" << std::endl; 
}
 
Zombie::Zombie()
{
    this->name = "";
}