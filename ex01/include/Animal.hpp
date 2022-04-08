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

  // Destructor
  virtual ~Animal();

  // Getters / Setters
  const string& getType() const;

  // Methods
  virtual void makeSound() const;

 private:
  // Disabled Members
  Animal(const Animal& other);
  Animal& operator=(const Animal& assign);
};

#endif  // __ANIMAL_H__
