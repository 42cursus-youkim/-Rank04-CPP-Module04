#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>

#define is_pure_virtual_func 0

using std::string;

// class Animal contains pure virtual function and cannot be initialized
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
  virtual void makeSound() const = is_pure_virtual_func;

 protected:
  void announce(const string& msg) const;
};

#endif  // ANIMAL_HPP