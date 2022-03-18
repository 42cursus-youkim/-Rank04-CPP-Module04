#ifndef ANIMAL_HPP
#define ANIMAL_HPP

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

#endif  // ANIMAL_HPP