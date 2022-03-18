#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal {
 public:
  // Constructors
  Dog();
  Dog(const Dog& other);

  // Destructor
  ~Dog();

  // Operators
  Dog& operator=(const Dog& assign);

  // Methods
  void makeSound() const;
};

#endif  // DOG_HPP