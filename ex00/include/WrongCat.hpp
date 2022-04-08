#ifndef __WRONGCAT_H__
#define __WRONGCAT_H__

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
 public:
  // Constructors
  WrongCat();

  // Destructor
  ~WrongCat();

  // Methods
  void makeSound() const;

 private:
  // Disabled Members
  WrongCat(WrongCat const& other);
  WrongCat& operator=(WrongCat const& assign);
};

#endif  // __WRONGCAT_H__
