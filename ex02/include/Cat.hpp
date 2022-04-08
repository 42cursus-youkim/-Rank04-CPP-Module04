#ifndef __CAT_H__
#define __CAT_H__

#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal {
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

  // Overrided Abstract Methods
  void makeSound() const;
};

#endif  // __CAT_H__
