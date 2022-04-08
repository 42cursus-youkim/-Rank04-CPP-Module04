#ifndef __CAT_H__
#define __CAT_H__

#include "Animal.hpp"

class Cat : public Animal {
 public:
  // Constructors
  Cat();

  // Destructor
  ~Cat();

  // Methods
  void makeSound() const;

 private:
  // Disabled Members
  Cat(const Cat& other);
  Cat& operator=(const Cat& assign);
};

#endif  // __CAT_H__
