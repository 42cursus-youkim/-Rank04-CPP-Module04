#include <iostream>
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

using std::cout;

int main() {
  {
    cout << "** Leak Detection **\n\n";
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    delete j;  // should not create a leak
    delete i;
  }
  {
    cout << "\n** Array of Animals Test **\n\n";
    Animal* animals[4] = {new Dog(), new Dog(), new Cat("cat1"),
                          new Cat("cat2")};
    for (int i = 0; i < 4; i++)
      animals[i]->makeSound();
    for (int i = 0; i < 4; i++)
      delete animals[i];
  }
  {
    cout << "\n** Deep Copy Test **\n\n";
    {
      Animal* dogAnimal = new Dog();
      Dog dogCopy(*(Dog*)dogAnimal);
      delete dogAnimal;
      dogCopy.makeSound();
      cout << "dogCopy's brain copied from dogAnimal=>\n" << dogCopy.getBrain() << "\n";
    }
    cout << "";
    {
      Animal* catAnimal = new Cat("CatAnimal");
      Cat catCopy("BeforeCopyCat");
      catCopy = (*(Cat*)catAnimal);
      delete catAnimal;
      catCopy.makeSound();
      cout << "catCopy's brain copied from catAnimal=>\n" << catCopy.getBrain() << "\n";
    }
  }
  return 0;
}