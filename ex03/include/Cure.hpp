#ifndef __CURE_H__
#define __CURE_H__

#include "AMateria.hpp"

class Cure : public AMateria {
 private:
  // Disabled Members
  Cure(Cure const& other);
  Cure& operator=(Cure const& other);

 public:
  // Constructor
  Cure();

  // Destructor
  ~Cure();

  // Methods
  AMateria* clone() const;
  void use(ICharacter& target);
};

#endif  // __CURE_H__
