#ifndef __ICE_H__
#define __ICE_H__

#include "AMateria.hpp"

class Ice : public AMateria {
 private:
  // Disabled Members
  Ice(Ice const& other);
  Ice& operator=(Ice const& other);

 public:
  // Constructor
  Ice();

  // Destructor
  ~Ice();

  // Methods
  AMateria* clone() const;
  void use(ICharacter& target);
};

#endif  // __ICE_H__
