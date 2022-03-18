#include "Cure.hpp"
#include <iostream>

// Constructors
Cure::Cure() : AMateria("cure") {}
Cure::Cure(Cure const& other) : AMateria(other) {}

// Destructor
Cure::~Cure() {}

// Operators
Cure& Cure::operator=(Cure const& other) {
  AMateria::operator=(other);
  return *this;
}

// Methods
AMateria* Cure::clone() const {
  return new Cure(*this);
}

void Cure::use(ICharacter& target) {
  std::cout << "* heals " << target.getName() << "'s wounds *\n";
  AMateria::use(target);
}
