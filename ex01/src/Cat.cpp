#include "Cat.hpp"

// Constructors
Cat::Cat() : Animal("Random Cat") {
  _brain = new Brain();
}
Cat::Cat(const string& type) : Animal(type) {
  _brain = new Brain();
}
Cat::Cat(Cat const& other) : Animal(other) {
  _brain = new Brain(other.getBrain());
}

// Destructor
Cat::~Cat() {
  announce("(CAT) is destroyed");
  delete _brain;
}

// Operators
Cat& Cat::operator=(Cat const& other) {
  if (this != &other) {
    Animal::operator=(other);
    _brain = new Brain(other.getBrain());
  }
  return *this;
}

// Getters
const Brain& Cat::getBrain() const {
  return *_brain;
}

// Methods
void Cat::makeSound() const {
  Animal::announce("(CAT) meow!");
}
