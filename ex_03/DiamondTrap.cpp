#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(const std::string& Name) : ScavTrap(Name), FragTrap(Name)
{
	std::cout << "DiamondTrap constructor was worked" << std::endl;
}

DiamondTrap::~DiamondTrap()
{

}
