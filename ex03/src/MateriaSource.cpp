#include "MateriaSource.hpp"
#include <iostream>
#include "color.hpp"

using std::cout;

// Constructors & Destructor
MateriaSource::MateriaSource() {
  for (int i = 0; i < MATERIA_SOURCE_SIZE; i++)
    _materias[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const& other) {
  for (int i = 0; i < MATERIA_SOURCE_SIZE; i++) {
    AMateria* otherMateria = other._materias[i];
    _materias[i] = otherMateria ? otherMateria->clone() : NULL;
  }
}

MateriaSource::~MateriaSource() {
  for (int i = 0; i < MATERIA_SOURCE_SIZE; i++)
    if (_materias[i])
      delete _materias[i];
}

// Operators
MateriaSource& MateriaSource::operator=(MateriaSource const& other) {
  if (this != &other) {
    for (int i = 0; i < MATERIA_SOURCE_SIZE; i++)
      delete _materias[i];

    for (int i = 0; i < MATERIA_SOURCE_SIZE; i++) {
      AMateria* otherMateria = other._materias[i];
      _materias[i] = otherMateria ? otherMateria->clone() : NULL;
    }
  }
  return *this;
}

void MateriaSource::learnMateria(AMateria* materia) {
  if (not materia)
    return;
  for (int i = 0; i < MATERIA_SOURCE_SIZE; i++) {
    if (not _materias[i]) {
      _materias[i] = materia->clone();
      cout << YEL "MateriaSource learns " BCYN << materia->getType()
           << "\n" END;
      return;
    }
  }
  cout << RED "MateriaSource is Full.\n" END;
}

AMateria* MateriaSource::createMateria(std::string const& type) {
  for (int i = 0; i < MATERIA_SOURCE_SIZE; i++) {
    if (_materias[i] and _materias[i]->getType() == type)
      return _materias[i]->clone();
  }
  cout << RED "MateriaSource does not have " BYEL << type << ".\n " END;
  return NULL;
}
