#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include "string"
#include "iostream"

class ClapTrap
{
public:
/*
 *  Constructor
 */
	ClapTrap(std::string const&, int hp=10, int ep=10, int dp=0);
	ClapTrap(const ClapTrap&);

/*
 *  Operator overlord
 */
	ClapTrap& operator=(const ClapTrap&);

/*
 *  Func-member
 */
	void				attack(std::string const & target);
	void				takeDamage(unsigned int amount);
	void				beRepaired(unsigned int amount);

	~ClapTrap();

protected:
/*
 *  Variable
 */
	std::string		Name;
	unsigned int	Hitpoints;
	unsigned int	Energy_points;
	unsigned int	Attack_damage;
};

#endif
