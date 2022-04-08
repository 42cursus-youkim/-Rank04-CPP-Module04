#include <iostream>
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

using std::cout;

int main() {
  {
    cout << "--- Animal ---\n";
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    cout << "\n";
    cout << "type of i is " << i->getType() << "\n";
    cout << "type of j is " << j->getType() << "\n";
    cout << "\n";
    i->makeSound();  // will output the cat sound!
    j->makeSound();
    meta->makeSound();
    cout << "\n";
    delete meta;
    delete i;
    delete j;
  }
  {
    cout << "\n--- WrongAnimal ---\n";
    const WrongAnimal* meta = new WrongAnimal();
    const WrongAnimal* i = new WrongCat();
    cout << "\n";
    cout << "type of meta is " << meta->getType() << "\n";
    cout << "type of i is " << i->getType() << "\n";
    cout << "\n";
    i->makeSound();  // will output the wrong animal sound!
    meta->makeSound();
    cout << "\n";
    delete i;
    delete meta;
  }
  return 0;
}