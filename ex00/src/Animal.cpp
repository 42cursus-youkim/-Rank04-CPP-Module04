#include "Animal.hpp"
#include "util.hpp"

// Constructors
Animal::Animal() : _type("Animal") {
  LOG_CLASS;
}

// Destructor
Animal::~Animal() {
  LOG_CLASS;
}

// Getters / Setters
const string& Animal::getType() const {
  return _type;
}

// Methods
void Animal::makeSound() const {
  log::log("Animal", "* Generic Animal Noise *");
}
