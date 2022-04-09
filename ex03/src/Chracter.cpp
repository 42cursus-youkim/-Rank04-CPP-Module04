#include "Character.hpp"
#include "util.hpp"

// Constructors
Character::Character(const string& name) : _name(name) {
  for (int i = 0; i < INVENTORY_SIZE; i++)
    _inventory[i] = NULL;
}

Character::Character(const Character& other) {
  _name = other._name;
  for (int i = 0; i < INVENTORY_SIZE; i++) {
    const AMateria* tmp = other._inventory[i];
    _inventory[i] = tmp ? tmp->clone() : NULL;
  }
}

// Destructor
// the Materias must be deleted when a Character is destroyed.
Character::~Character() {
  for (int i = 0; i < INVENTORY_SIZE; i++)
    if (_inventory[i])
      delete _inventory[i];
}

// Operators
Character& Character::operator=(const Character& other) {
  if (this != &other) {
    _name = other._name;

    for (int i = 0; i < INVENTORY_SIZE; i++)
      if (_inventory[i])
        delete _inventory[i];

    for (int i = 0; i < 4; i++) {
      const AMateria* tmp = other._inventory[i];
      _inventory[i] = tmp ? tmp->clone() : NULL;
    }
  }
  return *this;
}

// Getters/Setters
const string& Character::getName() const {
  return _name;
}

// Methods
void Character::equip(AMateria* m) {
  if (not m)
    return;
  for (int i = 0; i < INVENTORY_SIZE; i++) {
    if (not _inventory[i]) {
      _inventory[i] = m->clone();
      return;
    }
  }
}

// NOTE: unequip() member function must NOT delete the Materia!
void Character::unequip(int idx) {
  if (itemInInventory(idx))
    _inventory[idx] = NULL;
}

AMateria* Character::getMateria(int idx) const {
  return itemInInventory(idx) ? _inventory[idx] : NULL;
}

void Character::use(int idx, ICharacter& target) {
  if (itemInInventory(idx))
    _inventory[idx]->use(target);
}

bool Character::itemInInventory(int idx) const {
  return (0 <= idx and idx < 4) and _inventory[idx];
}
