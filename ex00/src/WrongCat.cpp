#include "WrongCat.hpp"
#include "util.hpp"

// Constructors
WrongCat::WrongCat() : WrongAnimal() {
  LOG_CLASS;
}

// Destructor
WrongCat::~WrongCat() {
  LOG_CLASS;
}

// Methods
void WrongCat::makeSound() const {
  log::log("WrongCat", "* Indescribable Screech Remotely Resambling Cat *");
}
