#include "AMateria.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"
#include "util.hpp"

void test_mandatory() {
  test::header("Mandatory");
  AMateria* ice = new Ice();
  AMateria* cure = new Cure();
  IMateriaSource* src = new MateriaSource();
  src->learnMateria(ice);
  src->learnMateria(cure);

  ICharacter* me = new Character("me");
  AMateria* tmp;
  {
    tmp = src->createMateria("ice");
    me->equip(tmp);
    delete tmp;
  }
  {
    tmp = src->createMateria("cure");
    me->equip(tmp);
    delete tmp;
  }
  ICharacter* bob = new Character("bob");
  me->use(0, *bob);
  me->use(1, *bob);

  delete bob;
  delete me;
  delete src;
  delete ice;
  delete cure;
}
