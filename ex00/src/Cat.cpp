#include "Cat.hpp"

// Constructors
Cat::Cat() : Animal("Random Cat") {}
Cat::Cat(Cat const& other) : Animal(other) {}

// Destructor
Cat::~Cat() {}

// Operators
Cat& Cat::operator=(Cat const& assign) {
  Animal::operator=(assign);
  return *this;
}

// Methods
void Cat::makeSound() const {
  Animal::announce("(CAT) meow!");
}
