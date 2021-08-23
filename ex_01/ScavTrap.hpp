#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include "string"
#include "iostream"

class ScavTrap : public ClapTrap
{
public:
	/*
	 *  Constructor
	 */
	ScavTrap(std::string const&);

	/*
	 *  Func-member
	 */
	void guardGate();

	~ScavTrap();
private:
};
#endif
