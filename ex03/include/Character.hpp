#ifndef __CHARACTER_H__
#define __CHARACTER_H__

#include "AMateria.hpp"
#include "ICharacter.hpp"

using std::string;

class Character : public ICharacter {
 private:
  enum { INVENTORY_SIZE = 4 };
  string _name;
  AMateria* _inventory[4];

  bool itemInInventory(int idx) const;

 public:
  // Constructor
  Character(const string& name);
  Character(const Character& other);

  // Destructor
  ~Character();

  // Operators
  Character& operator=(const Character& other);

  // Getters
  const string& getName() const;
  AMateria* getMateria(int idx) const;

  // Methods
  void equip(AMateria* m);
  void unequip(int idx);
  void use(int idx, ICharacter& target);
};

#endif  // __CHARACTER_H__
