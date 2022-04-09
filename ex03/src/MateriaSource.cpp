#include "MateriaSource.hpp"

// Constructors
MateriaSource::MateriaSource() {
  for (int i = 0; i < MAX_MATERIAS; i++)
    _materias[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const& other) {
  copyMateriasFromSource(other);
}

// Destructor
MateriaSource::~MateriaSource() {
  for (int i = 0; i < MAX_MATERIAS; i++)
    if (_materias[i])
      delete _materias[i];
}

// Operators
MateriaSource& MateriaSource::operator=(MateriaSource const& other) {
  copyMateriasFromSource(other);
  return *this;
}

// Methods
// FIXME: leaks if there are previously allocated materias
void MateriaSource::copyMateriasFromSource(MateriaSource const& other) {
  for (int i = 0; i < MAX_MATERIAS; i++) {
    const AMateria* temp = other._materias[i];
    if (temp) {
      delete _materias[i];
      _materias[i] = temp->clone();
    } else
      _materias[i] = NULL;
  }
}

void MateriaSource::learnMateria(AMateria* materia) {
  for (int i = 0; i < MAX_MATERIAS; i++) {
    if (not _materias[i]) {
      _materias[i] = materia;
      return;
    }
  }
}

AMateria* MateriaSource::createMateria(std::string const& type) {
  for (int i = 0; i < MAX_MATERIAS; i++) {
    if (_materias[i] and _materias[i]->getType() == type)
      return _materias[i]->clone();
  }
  return NULL;
}
