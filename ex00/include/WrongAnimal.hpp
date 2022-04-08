#ifndef __WRONGWrongAnimal_H__
#define __WRONGWrongAnimal_H__

#include <string>

using std::string;

class WrongAnimal {
 protected:
  string _type;

 public:
  // Constructors
  WrongAnimal();

  // Destructor
  virtual ~WrongAnimal();

  // Getters / Setters
  const string& getType() const;

  // Methods
  void makeSound() const;

 private:
  // Disabled Members
  WrongAnimal(const WrongAnimal& other);
  WrongAnimal& operator=(const WrongAnimal& assign);
};

#endif  // __WRONGANIMAL_H__
