#ifndef __DOG_H__
#define __DOG_H__

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal {
 private:
  Brain* _brain;

 public:
  // Constructors
  Dog();
  Dog(const Dog& other);

  // Destructors
  ~Dog();

  // Operators
  Dog& operator=(const Dog& assign);

  // Getters
  const Brain& getBrain() const;

  // Overrided Abstract Methods
  void makeSound() const;
};

#endif  // __DOG_H__
