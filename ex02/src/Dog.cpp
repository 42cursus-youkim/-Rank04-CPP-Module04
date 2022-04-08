#include "Dog.hpp"
#include "util.hpp"

// Constructors
Dog::Dog() : AAnimal(), _brain(new Brain()) {
  LOG_CLASS;
  _type = "Dog";
}

Dog::Dog(const Dog& other) : AAnimal(), _brain(new Brain(*other._brain)) {
  LOG_CLASS_COPY;
}

// Destructor
Dog::~Dog() {
  delete _brain;
  LOG_CLASS;
}

// Operators
Dog& Dog::operator=(const Dog& assign) {
  LOG_CLASS;
  if (this != &assign) {
    *_brain = *assign._brain;
  }

  return *this;
}

// Getters
const Brain& Dog::getBrain() const {
  return *_brain;
}

// Methods
void Dog::makeSound() const {
  log::val("Dog", "* Dog Noises *");
}
