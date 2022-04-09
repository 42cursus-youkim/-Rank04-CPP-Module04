#include "AMateria.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"
#include "util.hpp"

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
