#ifndef __WRONGANIMAL_H__
#define __WRONGANIMAL_H__

#include <string>

using std::string;

class WrongAnimal {
 protected:
  string type;

 public:
  // Constructors
  WrongAnimal();
  WrongAnimal(const WrongAnimal& copy);
  // Destructor
  virtual ~WrongAnimal();
  // Operators
  WrongAnimal& operator=(const WrongAnimal& copy);
  // Getters / Setters
  string const& getType() const;
  // Methods
  void makeSound() const;
};

#endif  // __WRONGANIMAL_H__