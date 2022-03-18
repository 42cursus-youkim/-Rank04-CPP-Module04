#include <iostream>
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

using std::cout;

int main() {
  const Animal* meta = new Animal();
  const Animal* i = new Cat();
  const Animal* j = new Dog();

  cout << "type of i is " << i->getType() << "\n";
  cout << "type of j is " << j->getType() << "\n";

  i->makeSound();  // will output the cat sound!
  j->makeSound();
  meta->makeSound();

  delete meta;
  delete i;
  delete j;
  return 0;
}