#include <iostream>
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "util.hpp"

using std::cout;

void test_not_pointer() {
  test::header("Non-Pointer Instances");
  test::subject("Animal");
  Animal animal;
  animal.makeSound();
  test::subject("Cat");
  Cat cat;
  cat.makeSound();
  test::subject("WrongAnimal");
  WrongAnimal wronganimal;
  wronganimal.makeSound();
  test::subject("WrongCat");
  WrongCat wrongcat;
  wrongcat.makeSound();
  test::subject("Cleanup");
}

void test_with_virtual() {
  test::header("Animal");

  test::subject("Animal creation");
  const Animal* meta = new Animal();
  test::subject("Dog creation");
  const Animal* dog = new Dog();
  test::subject("Cat creation");
  const Animal* cat = new Cat();
  {
    test::subject("Types");
    TEST_EXPECT(meta->getType() == "Animal");
    TEST_EXPECT(dog->getType() == "Dog");
    TEST_EXPECT(cat->getType() == "Cat");
  }
  {
    test::subject("VIRTUAL makeSound");
    dog->makeSound();
    cat->makeSound();  // will output the cat sound!
    meta->makeSound();
  }
  {
    test::subject("Animal destruction");
    delete meta;
    test::subject("Dog destruction");
    delete dog;
    test::subject("Cat destruction");
    delete cat;
  }
}

void test_without_virtual() {
  test::header("WrongCat@WrongAnimal");

  test::subject("WrongAnimal" BMAG "@WrongAnimalPtr " BCYN "creation");
  const WrongAnimal* meta = new WrongAnimal();
  test::subject("WrongCat" BMAG "@WrongAnimalPtr " BCYN "creation");
  const WrongAnimal* cat = new WrongCat();
  {
    test::subject("Types");
    TEST_EXPECT(meta->getType() == "WrongAnimal");
    TEST_EXPECT(cat->getType() == "WrongCat");
  }
  {
    test::subject(BRED "NON-VIRTUAL " BCYN "makeSound of meta");
    meta->makeSound();
    test::subject(BRED "NON-VIRTUAL " BCYN "makeSound of cat");
    cat->makeSound();  // will NOT output the cat sound!
  }
  {
    test::subject("WrongAnimal destruction");
    delete meta;
    test::subject("WrongCat destruction");
    delete cat;
  }
}

int main() {
  test_not_pointer();
  test_with_virtual();
  test_without_virtual();
  return 0;
}
