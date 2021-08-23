#include "ClapTrap.hpp"

/*
 *  Constructor
 */
ClapTrap::ClapTrap(std::string const& Name) : Name(Name), Hitpoints(10),
Energy_points(10), Attack_damage(0)
{
	std::cout << "ClapTrap constructor of " << Name
	<< " was worked" << std::endl;
}

/*
 *  Func-member
 */
void ClapTrap::attack(std::string const & target)
{
	this->Energy_points -= 2;
	std::cout << "ClapTrap " << Name << " attack " << target <<
				 " causing " << Attack_damage << " points of damage!"
				 << std::endl;
}


void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << Name << " get " << amount <<
	" damage! HP: " <<  Hitpoints << "->";
	if (Hitpoints < amount)
		Hitpoints = 0;
	else
		Hitpoints -= amount;
	std::cout << Hitpoints << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "ClapTrap " << Name << " be repaired on " << amount <<
	" point! HP: " <<  Hitpoints << "->";
	Hitpoints += amount;
	std::cout << Hitpoints << std::endl;
}


ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor of " << Name << " was worked" << std::endl;
}