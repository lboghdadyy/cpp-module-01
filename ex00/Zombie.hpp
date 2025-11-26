/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaghdad <sbaghdad@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 15:45:33 by sbaghdad          #+#    #+#             */
/*   Updated: 2025/11/26 15:53:10 by sbaghdad         ###   ########.fr       */
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
        Zombie(std::string name);
        Zombie();
        ~Zombie();
};

Zombie* newZombie( std::string name );
void    randomChump( std::string name );

