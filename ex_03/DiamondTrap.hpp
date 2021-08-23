#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, FragTrap
		{
		public:
			/*
			 *  Constructor
			 */
			DiamondTrap(std::string const&);

			/*
			 *  Func-member
			 */
			void whoAmI();

			~DiamondTrap();
		private:
		};

#endif