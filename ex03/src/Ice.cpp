#include "Ice.hpp"
#include <iostream>
#include "color.hpp"

// Constructors
Ice::Ice() : AMateria("ice") {}

// Destructor
Ice::~Ice() {}

// Methods
AMateria* Ice::clone() const {
  return new Ice();
}

void Ice::use(ICharacter& target) {
  std::cout << BLU "* shoots an ice bolt at " BCYN << target.getName()
            << BLU " *\n" END;
  AMateria::use(target);
}
