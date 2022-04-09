#include "Ice.hpp"
#include <iostream>

// Constructors
Ice::Ice() : AMateria("ice") {}
Ice::Ice(Ice const& other) : AMateria(other) {}

// Destructor
Ice::~Ice() {}

// Operators
Ice& Ice::operator=(Ice const& other) {
  AMateria::operator=(other);
  return *this;
}

// Methods
AMateria* Ice::clone() const {
  return new Ice(*this);
}

void Ice::use(ICharacter& target) {
  std::cout << "* shoots an ice bolt at " << target.getName() << " *\n";
  AMateria::use(target);
}
