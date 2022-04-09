#include "AMateria.hpp"
#include <iostream>
#include "color.hpp"

// Constructors & Destructor
AMateria::AMateria(string const& type) : _type(type) {}
AMateria::~AMateria() {}

// Getters/Setters
string const& AMateria::getType() const {
  return _type;
}

// Methods
void AMateria::use(ICharacter&) {}
