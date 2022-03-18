#include "Dog.hpp"

// Constructors
Dog::Dog() : Animal("Dog") {}

Dog::Dog(const Dog& other) : Animal(other) {}

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