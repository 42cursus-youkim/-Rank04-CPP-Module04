#include "Dog.hpp"
#include "util.hpp"

// Constructors
Dog::Dog() : Animal() {
  _type = "Dog";
  LOG_CLASS;
}

// Destructor
Dog::~Dog() {
  LOG_CLASS;
}

// Methods
void Dog::makeSound() const {
  log::log("Dog", "* Dog Noises *");
}
