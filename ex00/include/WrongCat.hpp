#ifndef __WRONGCAT_H__
#define __WRONGCAT_H__

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

#endif  // __WRONGCAT_H__