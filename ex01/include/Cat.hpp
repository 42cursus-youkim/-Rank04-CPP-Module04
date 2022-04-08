#ifndef __CAT_H__
#define __CAT_H__

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
 private:
  Brain* _brain;

 public:
  // Constructors
  Cat();
  Cat(const Cat& other);

  // Destructors
  ~Cat();

  // Operators
  Cat& operator=(const Cat& assign);

  // Getters
  const Brain& getBrain() const;

  // Methods
  void makeSound() const;
};

#endif  // __CAT_H__
