#include "ClapTrap.hpp"

/*
 *  Constructor
 */
ClapTrap::ClapTrap(std::string const& Name, int hp, int ep, int dp)
: Name(Name), Hitpoints(hp), Energy_points(ep), Attack_damage(dp)
{
	std::cout << "ClapTrap constructor of " << Name
	<< " was worked" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& c) : Name(c.Name), Hitpoints(c.Hitpoints),
Energy_points(c.Energy_points), Attack_damage(c.Attack_damage)
{
	std::cout << "ClapTrap copy constructor of " << Name
	<< " was worked" << std::endl;
}

/*
 *  Operator overlord
 */
ClapTrap& ClapTrap::operator=(const ClapTrap& c)
{
	std::cout << "ClapTrap operator = of " << Name
	<< " was worked" << std::endl;
	if (this == &c)
		return (*this);
	Name = c.Name;
	Hitpoints = c.Hitpoints;
	Energy_points = c.Energy_points;
	Attack_damage = c.Attack_damage;
	return (*this);
}

/*
 *  Func-member
 */
void ClapTrap::attack(std::string const & target)
{
	if (Energy_points < 2)
	{
		std::cout << "Low energy: " << Energy_points << std::endl;
		return;
	}
	else
	{
		std::cout << "Energy: " << Energy_points << "-> ";
		Energy_points -= 2;
		std::cout << Energy_points << " ";
	}
	std::cout << Name << " attack " << target <<
	" causing " << Attack_damage << " points of damage!" << std::endl;
}


void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << Name << " get " << amount <<
	" damage! HP: " <<  Hitpoints << "->";
	if (Hitpoints < amount)
		Hitpoints = 0;
	else
		Hitpoints -= amount;
	std::cout << Hitpoints << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	std::cout <<  Name << " be repaired on " << amount <<
	" point! HP: " <<  Hitpoints << "->";
	Hitpoints += amount;
	std::cout << Hitpoints << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor of " << Name << " was worked" << std::endl;
}