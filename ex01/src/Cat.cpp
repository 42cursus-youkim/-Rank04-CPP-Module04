#include "Cat.hpp"
#include "util.hpp"

// Constructors
Cat::Cat() : Animal(), _brain(new Brain()) {
  LOG_CLASS;
  _type = "Cat";
}

Cat::Cat(const Cat& other) : Animal(), _brain(new Brain(*other._brain)) {
  LOG_CLASS_COPY;
}

// Destructor
Cat::~Cat() {
  delete _brain;
  LOG_CLASS;
}

// Operators
Cat& Cat::operator=(const Cat& assign) {
  LOG_CLASS;
  if (this != &assign) {
    *_brain = *assign._brain;
  }

  return *this;
}

// Getters
const Brain& Cat::getBrain() const {
  return *_brain;
}

// Methods
void Cat::makeSound() const {
  log::val("Cat", "* Cat Noises *");
}
