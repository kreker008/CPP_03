#ifndef FragTrap_HPP
#define FragTrap_HPP

#include "ClapTrap.hpp"
#include "string"
#include "iostream"

class FragTrap : public ClapTrap
{
public:
	/*
	 *  Constructor
	 */
	FragTrap(std::string const&);
	FragTrap(const FragTrap&);

	/*
	 *  Operator overlord
	 */
	FragTrap& operator=(const FragTrap&);

	/*
	 *  Func-member
	 */
	void	highFivesGuys(void);
	void	attack(std::string const & target);

	~FragTrap();
private:
};
#endif
