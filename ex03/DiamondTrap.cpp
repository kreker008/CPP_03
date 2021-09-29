#include "DiamondTrap.hpp"


/*
 *  Constructor
 */
DiamondTrap::DiamondTrap(const std::string& Name) :
ClapTrap(Name + "_clap_name", 100, 50, 30), ScavTrap(Name + "_clap_name"), FragTrap(Name + "_clap_name"), Name(Name)
{
	std::cout << "DiamondTrap constructor was worked" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& d) :
ClapTrap(d), ScavTrap(d), FragTrap(d)
{
	std::cout << "DiamondTrap copy constructor was worked" << std::endl;
}

/*
 *  Func-member
 */
void DiamondTrap::whoAmI()
{
	std::cout << "DiamondTrap name - " << Name << ". ClapTrap name - "
	<< ClapTrap::Name << "." << std::endl;
}

void	DiamondTrap::attack(std::string const & target)
{
	ScavTrap::attack(target);
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destructor was worked" << std::endl;
}
