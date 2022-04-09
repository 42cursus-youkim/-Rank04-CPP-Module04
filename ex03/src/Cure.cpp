#include "Cure.hpp"
#include <iostream>
#include "color.hpp"

// Constructors
Cure::Cure() : AMateria("cure") {}

// Destructor
Cure::~Cure() {}

// Methods
AMateria* Cure::clone() const {
  return new Cure();
}

void Cure::use(ICharacter& target) {
  std::cout << GRN "* heals " BCYN << target.getName()
            << GRN "'s wounds *\n" END;
  AMateria::use(target);
}
