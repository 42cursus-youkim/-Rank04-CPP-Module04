#include "WrongAnimal.hpp"
#include <iostream>

using std::cout;

// Constructors
WrongAnimal::WrongAnimal() : _type("WrongAnimal") {
  announce("is born");
}

WrongAnimal::WrongAnimal(const WrongAnimal& other) {
  *this = other;
  announce("is copied");
}

// Destructor
WrongAnimal::~WrongAnimal() {
  announce("dies");
}

// Operators
WrongAnimal& WrongAnimal::operator=(const WrongAnimal& assign) {
  announce("is assigned");
  _type = assign.getType();
  return *this;
}

// Getters / Setters
const string& WrongAnimal::getType() const {
  return _type;
}

// Methods
void WrongAnimal::makeSound() const {
  announce("(WrongAnimal) makes a sound");
}

void WrongAnimal::announce(const string& msg) const {
  cout << _type << " " << msg << std::endl;
}
