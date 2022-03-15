#include "Animal.hpp"

// Constructors
Animal::Animal() {
  _type = "";
}

Animal::Animal(const Animal& copy) {
  _type = copy.getType();
}

Animal::Animal(string type) {
  _type = type;
}

// Destructor
Animal::~Animal() {}

// Operators
Animal& Animal::operator=(const Animal& assign) {
  _type = assign.getType();
  return *this;
}

// Getters / Setters
const string& Animal::getType() const {
  return _type;
}