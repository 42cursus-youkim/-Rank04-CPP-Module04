#include "WrongAnimal.hpp"
#include "util.hpp"

// Constructors
WrongAnimal::WrongAnimal() : _type("WrongAnimal") {
  LOG_CLASS;
}

// Destructor
WrongAnimal::~WrongAnimal() {
  LOG_CLASS;
}

// Getters / Setters
const string& WrongAnimal::getType() const {
  return _type;
}

// Methods
void WrongAnimal::makeSound() const {
  log::log("WrongAnimal", "* Something Feels Very Wrong *");
}
