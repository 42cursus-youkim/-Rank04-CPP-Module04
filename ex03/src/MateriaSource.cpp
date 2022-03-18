#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
  for (int i = 0; i < 4; i++)
    _materia[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const& other) {
  for (int i = 0; i < 4; i++) {
    const AMateria* temp = other._materia[i];
    if (temp)
      _materia[i] = temp->clone();
    else
      _materia[i] = NULL;
  }
}

MateriaSource::~MateriaSource() {
  for (int i = 0; i < 4; i++)
    if (_materia[i])
      delete _materia[i];
}

MateriaSource& MateriaSource::operator=(MateriaSource const& other) {
  for (int i = 0; i < 4; i++) {
    const AMateria* temp = other._materia[i];
    if (temp)
      _materia[i] = temp->clone();
    else
      _materia[i] = NULL;
  }
  return *this;
}

void MateriaSource::learnMateria(AMateria* materia) {
  for (int i = 0; i < 4; i++) {
    if (not _materia[i]) {
      _materia[i] = materia;
      return;
    }
  }
}

AMateria* MateriaSource::createMateria(std::string const& type) {
  for (int i = 0; i < 4; i++) {
    if (_materia[i] and _materia[i]->getType() == type)
      return _materia[i]->clone();
  }
  return NULL;
}
