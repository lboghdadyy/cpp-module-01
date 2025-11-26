/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaghdad <sbaghdad@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 16:53:29 by sbaghdad          #+#    #+#             */
/*   Updated: 2025/11/26 16:03:59 by sbaghdad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Weapon.hpp"

class HumanB
{
    private:
        Weapon		*w1;
        std::string	name;
    public:
    	void	attack();
        HumanB(std::string name);
        void    setWeapon(Weapon *wep);
        
};