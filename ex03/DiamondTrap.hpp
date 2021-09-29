#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
public:
	/*
	 *  Constructor
	 */
	DiamondTrap(std::string const&);
	DiamondTrap(const DiamondTrap&);

	/*
	 *  Operator overlord
	 */
	DiamondTrap& operator=(const DiamondTrap&);

	/*
	 *  Func-member
	 */
	void	whoAmI();
	void	attack(std::string const & target);

	~DiamondTrap();
private:
	std::string Name;
};

#endif