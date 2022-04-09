#include "AMateria.hpp"
#include <iostream>

// Constructors & Destructor
AMateria::AMateria(string const& type) : _type(type) {}
AMateria::~AMateria() {}

// Getters/Setters
string const& AMateria::getType() const {
  return _type;
}

// Operators
bool AMateria::operator==(AMateria const& other) const {
  return _type == other._type;
}

// Methods
void AMateria::use(ICharacter&) {}
