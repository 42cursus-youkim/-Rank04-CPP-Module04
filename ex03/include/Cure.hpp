#ifndef __CURE_H__
#define __CURE_H__

#include "AMateria.hpp"

class Cure : public AMateria {
 public:
  // Constructor
  Cure();
  Cure(Cure const& other);

  // Destructor
  ~Cure();

  // Operators
  Cure& operator=(Cure const& rhs);

  // Methods
  AMateria* clone() const;
  void use(ICharacter& target);
};

#endif  // __CURE_H__