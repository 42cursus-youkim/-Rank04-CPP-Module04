#include "Dog.hpp"

// Constructors
Dog::Dog() : Animal("Dog") {
  _brain = new Brain();
  announce("(DOG) is created");
}

Dog::Dog(const Dog& other) : Animal(other) {
  _brain = new Brain(other.getBrain());
  announce("(DOG) is created");
}

// Destructor
Dog::~Dog() {
  announce("(DOG) is destroyed");
  delete _brain;
}

// Operators
Dog& Dog::operator=(const Dog& other) {
  if (this != &other) {
    Animal::operator=(other);
    _brain = new Brain(other.getBrain());
  }
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