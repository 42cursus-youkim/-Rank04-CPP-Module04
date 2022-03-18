#ifndef __CAT_H__
#define __CAT_H__

#include "Animal.hpp"

class Cat : public Animal {
 public:
  // Constructors
  Cat();
  Cat(const string& type);
  Cat(Cat const& other);

  // Destructor
  ~Cat();

  // Operators
  Cat& operator=(Cat const& assign);

  // Methods
  void makeSound() const;
};

#endif  // __CAT_H__

