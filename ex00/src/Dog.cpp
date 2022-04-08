#include "Dog.hpp"

// Constructors
Dog::Dog() : Animal() {
  _type = "Dog";
  announce("(DOG) is created");
}
Dog::Dog(const Dog& other) : Animal(other) {
  announce("(DOG) is created");
}
// Destructor
Dog::~Dog() {
  announce("(DOG) is destroyed");
}

// Operators
Dog& Dog::operator=(const Dog& assign) {
  Animal::operator=(assign);
  return *this;
}

// Methods
void Dog::makeSound() const {
  Animal::announce("(DOG) woof!");
}