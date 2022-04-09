#ifndef __MATERIASOURCE_H__
#define __MATERIASOURCE_H__

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {
 private:
  const static int MAX_MATERIAS = 4;

  AMateria* _materias[MAX_MATERIAS];

  // Methods
  void copyMateriasFromSource(MateriaSource const& other);

 public:
  // Constructors
  MateriaSource();
  MateriaSource(MateriaSource const& other);

  // Destructor
  ~MateriaSource();

  // operators
  MateriaSource& operator=(MateriaSource const& other);

  // Methods
  void learnMateria(AMateria* m);
  AMateria* createMateria(std::string const& type);
};

#endif  // __MATERIASOURCE_H__
