#include "AAnimal.hpp"
#include "util.hpp"

// Constructors
AAnimal::AAnimal() : _type("Abstract Animal") {
  LOG_CLASS;
}

// Destructor
AAnimal::~AAnimal() {
  LOG_CLASS;
}

// Getters / Setters
const string& AAnimal::getType() const {
  return _type;
}
