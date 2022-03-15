#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

using std::string;

class Animal {
 public:
  // Constructors
  Animal();
  Animal(const Animal& copy);
  Animal(string type);

  // Destructor
  ~Animal();

  // Operators
  Animal& operator=(const Animal& assign);

  // Getters / Setters
  const string& getType() const;

 private:
  string _type;
  void announce(const string& msg) const;
};



#endif