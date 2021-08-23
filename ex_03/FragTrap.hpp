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

	/*
	 *  Func-member
	 */
	void highFivesGuys(void);

	~FragTrap();
private:
};
#endif
