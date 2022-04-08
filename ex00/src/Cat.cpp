#include "Cat.hpp"
#include "util.hpp"

// Constructors
Cat::Cat() : Animal() {
  _type = "Cat";
  LOG_CLASS;
}

// Destructor
Cat::~Cat() {
  LOG_CLASS;
}

// Methods
void Cat::makeSound() const {
  log::val("Cat", "* Cat Noises *");
}
