#include "DiamondTrap.hpp"

int main()
{
	DiamondTrap dt("KarlJhon");

	dt.whoAmI();
	dt.attack("Luis");
	dt.takeDamage(3);
	dt.beRepaired(5);
	dt.guardGate();
	return (0);
}