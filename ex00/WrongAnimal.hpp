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
  virtual ~WrongAnimal();
  // Operators
  WrongAnimal& operator=(const WrongAnimal& copy);
  string const& getType() const;
  void makeSound() const;
};

#endif  // __WRONGANIMAL_H__