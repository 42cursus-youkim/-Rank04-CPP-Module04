#include "Dog.hpp"

// Constructors
Dog::Dog() : Animal("Dog") {
  _brain = new Brain();
}

Dog::Dog(const Dog& other) : Animal(other) {
  _brain = new Brain(other.getBrain());
}

// Destructor
Dog::~Dog() {
  announce("(DOG) is destroyed");
  delete _brain;
}

// Operators
Dog& Dog::operator=(const Dog& assign) {
  Animal::operator=(assign);
  return *this;
}

// Getters
const Brain& Dog::getBrain() const {
  return *_brain;
}

// Methods
void Dog::makeSound() const {
  Animal::announce("(DOG) woof!");
}