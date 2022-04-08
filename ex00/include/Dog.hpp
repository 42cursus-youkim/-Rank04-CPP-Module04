#ifndef __DOG_H__
#define __DOG_H__

#include "Animal.hpp"

class Dog : public Animal {
 public:
  // Constructors
  Dog();

  // Destructor
  ~Dog();

  // Methods
  void makeSound() const;

 private:
  // Disabled Members
  Dog(const Dog& other);
  Dog& operator=(const Dog& assign);
};

#endif  // __DOG_H__
