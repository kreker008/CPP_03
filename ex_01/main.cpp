#include "ScavTrap.hpp"

int main()
{
	ScavTrap Karl("Karl");

	Karl.guardGate();
	Karl.attack("dragon");
	Karl.takeDamage(13);
	Karl.takeDamage(100);
	Karl.beRepaired(13);
	return (0);
}