/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaghdad <sbaghdad@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 16:53:48 by sbaghdad          #+#    #+#             */
/*   Updated: 2025/11/26 15:58:44 by sbaghdad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

int main(int ac, char *av[])
{
    if (ac != 2)
        return (std::cout << "invalid parameters\n", 1);
    Zombie *zombies = zombieHorde(0, av[1]);
    if (!zombies)
        return (1);
    for (int i = 0; i < 5; i++)
        zombies[i].announce();
    delete[] zombies;
    return (0);
}