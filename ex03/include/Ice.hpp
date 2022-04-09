#ifndef __ICE_H__
#define __ICE_H__

#include "AMateria.hpp"

class Ice : public AMateria {
 public:
  // Constructor
  Ice();
  Ice(Ice const& other);

  // Destructor
  ~Ice();

  // Operators
  Ice& operator=(Ice const& other);

  // Methods
  AMateria* clone() const;
  void use(ICharacter& target);
};

#endif  // __ICE_H__
