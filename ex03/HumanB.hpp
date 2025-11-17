# include "Weapon.hpp"

class HumanB{
    private:
        Weapon		w1;
        std::string	name;
    public:
    	void	attack();
        HumanB(std::string name);
        void    setWeapon(Weapon wep);
        
};