/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaghdad <sbaghdad@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 16:53:43 by sbaghdad          #+#    #+#             */
/*   Updated: 2025/11/26 15:59:16 by sbaghdad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>

class Zombie
{
private:
    std::string name;
public:
    void    announce(void);
    void    SetName(std::string string);
    Zombie();
    ~Zombie();
};

Zombie* zombieHorde( int N, std::string name );