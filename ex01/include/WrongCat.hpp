#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
 public:
  // Constructors
  WrongCat();
  WrongCat(WrongCat const& other);

  // Destructor
  ~WrongCat();

  // Operators
  WrongCat& operator=(WrongCat const& assign);

  // Methods
  void makeSound() const;
};

#endif  // WRONGCAT_HPP