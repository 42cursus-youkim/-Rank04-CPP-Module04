#ifndef __AANIMAL_H__
#define __AANIMAL_H__

#include <string>

using std::string;

class AAnimal {
 protected:
  string _type;

 public:
  // Constructors
  AAnimal();

  // Destructor
  virtual ~AAnimal();

  // Getters / Setters
  const string& getType() const;

  // Abstract Methods
  virtual void makeSound() const = 0;

 private:
  // Disabled Members
  AAnimal(const AAnimal& other);
  AAnimal& operator=(const AAnimal& assign);
};

#endif  // __AANIMAL_H__
