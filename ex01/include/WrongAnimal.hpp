#ifndef WRONGWrongAnimal_HPP
#define WRONGWrongAnimal_HPP

#include <string>

using std::string;

class WrongAnimal {
 protected:
  string _type;

 public:
  // Constructors
  WrongAnimal();
  WrongAnimal(const string& type);
  WrongAnimal(const WrongAnimal& other);

  // Destructor
  virtual ~WrongAnimal();

  // Operators
  WrongAnimal& operator=(const WrongAnimal& assign);

  // Getters / Setters
  const string& getType() const;

  // Methods
  void makeSound() const;

 protected:
  void announce(const string& msg) const;
};
#endif  // WRONGWrongAnimal_H