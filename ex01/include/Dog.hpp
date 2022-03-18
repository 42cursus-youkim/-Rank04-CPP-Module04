#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
 private:
  Brain* _brain;

 public:
  // Constructors
  Dog();
  Dog(const Dog& other);

  // Destructor
  ~Dog();

  // Operators
  Dog& operator=(const Dog& other);

  // Getters
  const Brain& getBrain() const;

  // Methods
  void makeSound() const;
};

#endif  // DOG_HPP