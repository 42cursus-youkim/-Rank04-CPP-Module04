#include "AMateria.hpp"
#include <iostream>

// Constructors
AMateria::AMateria() {}  // Disabled

AMateria::AMateria(string const& type) {
  _type = type;
}
AMateria::AMateria(AMateria const& other) {
  _type = other._type;
}

// Destructor
AMateria::~AMateria() {}

// Operators
AMateria& AMateria::operator=(AMateria const& other) {
  _type = other._type;
  return *this;
}

// Getters/Setters
string const& AMateria::getType() const {
  return _type;
}

// Methods
void AMateria::use(ICharacter&) {}
