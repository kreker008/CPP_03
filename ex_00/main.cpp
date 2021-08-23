#include "ClapTrap.hpp"

int main()
{
	ClapTrap Karl("Karl");
	ClapTrap Jhon("Jhon");

	Karl.attack("Jhon");
	Jhon.takeDamage(0);
	Jhon.takeDamage(2);
	Jhon.takeDamage(12);
	Jhon.beRepaired(12);
	return (0);
}