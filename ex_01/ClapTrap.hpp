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
	ClapTrap(std::string const&);
	ClapTrap(std::string const&, int, int , int);

/*
 *  Func-member
 */
	void				attack(std::string const & target);
	void				takeDamage(unsigned int amount);
	void				beRepaired(unsigned int amount);
	std::string const&	getName();

	~ClapTrap();
private:
/*
 *  Variable
 */
	std::string		Name;
	unsigned int	Hitpoints;
	unsigned int	Energy_points;
	unsigned int	Attack_damage;


};

#endif
