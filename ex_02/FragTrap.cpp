#include "FragTrap.hpp"

/*
 *  Constructor
 */
FragTrap::FragTrap(std::string const& Name) : ClapTrap(Name, 100, 100, 30)
{
	std::cout << "FragTrap constructor of " << this->getName()
	<< " was worked" << std::endl;
}

/*
 *  Func-member
 */
void FragTrap::highFivesGuys(void)
{
	std::cout << "high fives!" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor of " << this->getName() << " was worked" << std::endl;

}