#ifndef __ANIMAL_H__
#define __ANIMAL_H__

#include <string>

using std::string;

class Animal {
 protected:
  string _type;

 public:
  // Constructors
  Animal();
  Animal(const string& type);
  Animal(const Animal& other);

  // Destructor
  ~Animal();

  // Operators
  Animal& operator=(const Animal& assign);

  // Getters / Setters
  const string& getType() const;

 protected:
  void announce(const string& msg) const;
};

class WrongAnimal {
 protected:
  string _type;

 public:
 protected:
  void announce(const string& msg) const;
};
class WrongCat : public WrongAnimal {};

class Dog : public Animal {};
class Cat : public Animal {
 public:
  Cat();
  Cat(Cat const& other);
  ~Cat();
};

#endif  // __ANIMAL_H__