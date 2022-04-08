#include "WrongCat.hpp"
#include "util.hpp"

// Constructors
WrongCat::WrongCat() : WrongAnimal() {
  _type = "WrongCat";
  LOG_CLASS;
}

// Destructor
WrongCat::~WrongCat() {
  LOG_CLASS;
}

// Methods
void WrongCat::makeSound() const {
  log::val("WrongCat", "* Supposed To Be Cat Noise *");
}
