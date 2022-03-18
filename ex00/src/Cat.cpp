#include "Cat.hpp"

// Constructors
Cat::Cat() : Animal("Random Cat") {}
Cat::Cat(const string& type) : Animal(type) {}
Cat::Cat(Cat const& other) : Animal(other) {}

// Destructor
Cat::~Cat() {
  announce("(CAT) is destroyed");
}

// Operators
Cat& Cat::operator=(Cat const& assign) {
  Animal::operator=(assign);
  return *this;
}

// Methods
void Cat::makeSound() const {
  Animal::announce("(CAT) meow!");
}
