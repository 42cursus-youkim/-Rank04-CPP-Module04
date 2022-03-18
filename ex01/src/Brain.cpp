#include "Brain.hpp"

// Constructors
Brain::Brain() {}

Brain::Brain(const Brain& copy) {
  (void)copy;
}

// Destructor
Brain::~Brain() {}

// Operators
Brain& Brain::operator=(const Brain& assign) {
  (void)assign;
  return *this;
}
