#include "FragTrap.hpp"

/*
 *  Constructor
 */
FragTrap::FragTrap(std::string const& Name) : ClapTrap(Name, 100, 100, 30)
{
	std::cout << "FragTrap constructor of " << Name
	<< " was worked" << std::endl;
}

FragTrap::FragTrap(const FragTrap& f) : ClapTrap(f)
{
	std::cout << "FragTrap copy constructor of " << Name
	<< " was worked" << std::endl;
}

/*
 *  Operator overlord
 */
FragTrap& FragTrap::operator=(const FragTrap& f)
{
	std::cout << "FragTrap operator = of " << Name
	<< " was worked" << std::endl;
	if (this == &f)
		return (*this);
	static_cast <ClapTrap&> (*this) = static_cast<const ClapTrap&>(f);
	return (*this);
}

/*
 *  Func-member
 */
void FragTrap::attack(std::string const & target)
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
	std::cout << "FragTrap: " << Name << " attack " << target <<
	" causing " << Attack_damage << " points of damage!" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "high fives!" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor of " << Name << " was worked" << std::endl;

}