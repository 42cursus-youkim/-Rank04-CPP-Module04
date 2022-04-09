#include "AMateria.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"
#include "util.hpp"

void test_materia() {
  test::header("Materia");
  // AMateria is abstract
  // AMateria *m = new AMateria("ice");
  {
    test::subject("Cloning Ice");
    AMateria* ice = new Ice();
    AMateria* ice_clone = ice->clone();
    TEST_EXPECT(ice->getType() == "ice");
    TEST_EXPECT(ice_clone->getType() == "ice");
    delete ice;
    delete ice_clone;
  }
  {
    test::subject("Cloning Cure");
    AMateria* cure = new Cure();
    AMateria* cure_clone = cure->clone();
    TEST_EXPECT(cure->getType() == "cure");
    TEST_EXPECT(cure_clone->getType() == "cure");
    delete cure;
    delete cure_clone;
  }
}

void test_materia_source() {
  test::header("MateriaSource");
  AMateria* ice = new Ice();
  AMateria* cure = new Cure();
  IMateriaSource* src = new MateriaSource();
  {
    test::subject("Creating Nonexsistant Materia");
    TEST_EXPECT(src->createMateria("fire") == NULL);
  }
  {
    test::subject("Learning Materia");
    src->learnMateria(ice);
    src->learnMateria(cure);
    test::subject("Learning NULL does not crash");
    src->learnMateria(NULL);
  }
  {
    test::subject("Creating Materia");
    AMateria* new_ice = src->createMateria("ice");
    AMateria* new_cure = src->createMateria("cure");
    TEST_EXPECT(*new_ice == *ice);
    TEST_EXPECT(*new_cure == *cure);
    delete new_ice;
    delete new_cure;
  }
  {
    test::subject("Overflow");
    for (int i = 0; i < 4; i++)
      src->learnMateria(ice);
  }
  {
    test::subject("Deep Copy" BMAG "@Copy Constructor");
    MateriaSource tmp(*dynamic_cast<MateriaSource*>(src));
    test::subject("Deep Copy" BMAG "@Assignment Operator");
    MateriaSource assign;
    assign = *dynamic_cast<MateriaSource*>(src);
    test::subject("Should not crash");
  }
  delete src;
  delete ice;
  delete cure;
}

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

int main() {
  // test_materia();
  // test_materia_source();
  test_mandatory();
  return 0;
}
