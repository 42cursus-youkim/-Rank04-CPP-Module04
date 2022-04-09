#include "AMateria.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
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
