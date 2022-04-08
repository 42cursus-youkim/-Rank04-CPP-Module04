#include "Character.hpp"

// Constructors
Character::Character(const string& name) {
  _name = name;
  for (int i = 0; i < 4; i++) {
    _inventory[i] = NULL;
  }
}

Character::Character(const Character& other) {
  _name = other._name;
  for (int i = 0; i < 4; i++) {
    const AMateria* temp = other._inventory[i];
    if (temp)
      _inventory[i] = temp->clone();
    else
      _inventory[i] = NULL;
  }
}

// Destructor
Character::~Character() {
  for (int i = 0; i < 4; i++) {
    if (_inventory[i])
      delete _inventory[i];
  }
}

// Operators
Character& Character::operator=(const Character& other) {
  if (this != &other) {
    _name = other._name;
    for (int i = 0; i < 4; i++) {
      const AMateria* temp = other._inventory[i];
      if (temp)
        _inventory[i] = temp->clone();
      else
        _inventory[i] = NULL;
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
  for (int i = 0; i < 4; i++) {
    if (_inventory[i] == NULL) {
      _inventory[i] = m->clone();
      return;
    }
  }
}

void Character::unequip(int idx) {
  if (0 <= idx and idx < 4) {
    if (_inventory[idx]) {
      delete _inventory[idx];
      _inventory[idx] = NULL;
    }
  }
}

void Character::use(int idx, ICharacter& target) {
  if (0 <= idx and idx < 4)
    if (_inventory[idx])
      _inventory[idx]->use(target);
}