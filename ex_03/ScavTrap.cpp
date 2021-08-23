#include "ScavTrap.hpp"

/*
 *  Constructor
 */
ScavTrap::ScavTrap(std::string const& Name) : ClapTrap(Name, 100, 50, 20)
{
	std::cout << "ScavTrap constructor of " << this->getName()
	<< " was worked" << std::endl;
}

/*
 *  Func-member
 */
void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->getName()
	<< " have enterred in Gate keeper mode."
	<< std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor of " << this->getName() << " was worked" << std::endl;
}