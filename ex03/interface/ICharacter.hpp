#ifndef __ICHARACTER_H__
#define __ICHARACTER_H__

#include <string>

class AMateria;

class ICharacter {
 public:
  // Destructor
  virtual ~ICharacter() {}

  // Getters/Setters
  virtual std::string const& getName() const = 0;

  // Methods
  virtual void equip(AMateria* m) = 0;
  virtual void unequip(int idx) = 0;
  virtual void use(int idx, ICharacter& target) = 0;
};

#endif  // __ICHARACTER_H__