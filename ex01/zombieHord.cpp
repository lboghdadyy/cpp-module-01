/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHord.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaghdad <sbaghdad@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 16:53:40 by sbaghdad          #+#    #+#             */
/*   Updated: 2025/11/26 15:58:48 by sbaghdad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name )
{
    Zombie *zombies;
    
    if (N <= 0)
    {
        std::cout << "invalid number\n";
        return (NULL);
    }
    zombies = new Zombie[N];
    for (int i = 0; i < N; i++)
        zombies[i].SetName(name);
    return (zombies);
}
