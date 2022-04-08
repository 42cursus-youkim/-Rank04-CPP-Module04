#include "Cat.hpp"

// Constructors
Cat::Cat() : Animal() {
  _type = "Cat";
  announce("(CAT) is born");
}

Cat::Cat(Cat const& other) : Animal(other) {
  announce("(CAT) is born");
}

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
