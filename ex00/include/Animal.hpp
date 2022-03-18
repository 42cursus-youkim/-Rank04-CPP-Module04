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
  virtual ~Animal();

  // Operators
  Animal& operator=(const Animal& assign);

  // Getters / Setters
  const string& getType() const;

  // Methods
  virtual void makeSound() const;

 protected:
  void announce(const string& msg) const;
};

#endif  // __ANIMAL_H__