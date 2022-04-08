#include "WrongCat.hpp"

// Constructors
WrongCat::WrongCat() : WrongAnimal() {
  _type = "WrongCat";
}
WrongCat::WrongCat(WrongCat const& other) : WrongAnimal(other) {}

// Destructor
WrongCat::~WrongCat() {
  announce("(WRONGCAT) is destroyed");
}

// Operators
WrongCat& WrongCat::operator=(WrongCat const& assign) {
  WrongAnimal::operator=(assign);
  return *this;
}

// Methods
void WrongCat::makeSound() const {
  WrongAnimal::announce("(WrongCat) meow!");
}
