#ifndef CAT_HPP
#define CAT_HPP

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

#endif  // CAT_HPP
