#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include "string"
#include "iostream"

class ScavTrap : virtual public ClapTrap
{
public:
	/*
	 *  Constructor
	 */
	ScavTrap(std::string const&);
	ScavTrap(const ScavTrap& s);

	/*
	 *  Operator overlord
	 */
	ScavTrap& operator=(const ScavTrap&);

	/*
	 *  Func-member
	 */
	void attack(std::string const & target);
	void guardGate();

	~ScavTrap();
private:
};
#endif
