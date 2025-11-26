/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaghdad <sbaghdad@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 16:53:00 by sbaghdad          #+#    #+#             */
/*   Updated: 2025/11/17 21:32:46 by sbaghdad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>

class Harl
{
    private:
        void    debug( void );
        void    info( void );
        void    warning( void );
        void    error( void );
        void    (Harl::*ptr[5])(void);
    public:
        void    complain(std::string level);
        Harl();
};

