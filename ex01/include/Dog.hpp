#ifndef __DOG_H__
#define __DOG_H__

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

#endif  // __DOG_H__