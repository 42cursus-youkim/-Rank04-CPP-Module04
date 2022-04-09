#include <iostream>
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "util.hpp"

using std::cout;

template <typename T>
bool brainIsDifferent(T a, T b) {
  const Brain &aBrain = a.getBrain(), &bBrain = b.getBrain();
  if (&aBrain == &bBrain)
    return false;
  for (int i = 0; i < Brain::BRAIN_SIZE; i++) {
    if (&aBrain.getIdea(i) == &bBrain.getIdea(i))
      return false;
  }
  return true;
}

void test_deep_copy() {
  {
    test::header("Deep Copy@Scope");
    Dog dog;
    {
      test::subject("tmp@Scope");
      Dog tmp = dog;
    }
    test::subject("Look ma, no segfaults");
  }
  {
    test::header("Deep Copy@Constructor");
    test::subject("Cat");
    Cat cat;
    test::subject("Copy Constructed Cat");
    Cat copycat = cat;
    test::subject("Check Memory Address is different");
    TEST_EXPECT(brainIsDifferent(cat, copycat));
    test::subject("Done");
  }
}

void test_assignment_operator() {
  {
    test::header("Deep Copy@Assignment");
    test::subject("Cat");
    Cat cat;
    test::subject("Before Assigned Cat");
    Cat assigncat;
    test::subject("Assigned Cat");
    assigncat = cat;
    test::subject("Check Memory Address is different");
    TEST_EXPECT(brainIsDifferent(cat, assigncat));
    test::subject("Done");
  }
  {
    test::header("Deep Copy@Multiple");
    Dog dog;
    Dog other;
    for (int i = 0; i < 10; i++)
      dog = other;
    LOG_VAL(dog.getBrain());
  }
}

void test_animal_array() {
  test::header("Animal Array");
  test::subject("Construction");
  Animal* animals[4] = {new Cat(), new Dog(), new Cat(), new Dog()};
  test::subject("Cleanup");
  for (int i = 0; i < 4; i++)
    delete animals[i];

  test::subject("Done");
}

int main() {
  srand(static_cast<unsigned int>(time(NULL)));
  test_animal_array();
  test_deep_copy();
  test_assignment_operator();
  return 0;
}
