#include "ScavTrap.hpp"

/*
 *  Constructor
 */
ScavTrap::ScavTrap(std::string const& Name) : ClapTrap(Name, 100, 50, 20)
{
	std::cout << "ScavTrap constructor of " << this->Name
	<< " was worked" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& s) : ClapTrap(s)
{
	std::cout << "FragTrap copy constructor of " << Name
	<< " was worked" << std::endl;
}

/*
 *  Operator overlord
 */
ScavTrap& ScavTrap::operator=(const ScavTrap& s)
{
	std::cout << "ScavTrap operator = of " << Name
	<< " was worked" << std::endl;
	if (this == &s)
		return (*this);
	static_cast <ClapTrap&> (*this) = static_cast<const ClapTrap&>(s);
	return (*this);
}

/*
 *  Func-member
 */
void ScavTrap::attack(std::string const & target)
{
	if (Energy_points < 2)
	{
		std::cout << "Low energy: " << Energy_points << std::endl;
		return;
	}
	else
	{
		std::cout << "Energy: " << Energy_points << "->";
		Energy_points -= 2;
		std::cout << Energy_points << " ";
	}
	std::cout << "ScavTrap: " <<  Name << " attack " << target <<
	" causing " << Attack_damage << " points of damage!" << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << Name
	<< " have enterred in Gate keeper mode."
	<< std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor of " << Name << " was worked" << std::endl;
}