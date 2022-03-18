#ifndef __AMATERIA_H__
#define __AMATERIA_H__

#include <string>
#include "ICharacter.hpp"

using std::string;

class AMateria {
 protected:
  string _type;

 private:
  AMateria();

 public:
  // Constructor
  AMateria(string const& type);
  AMateria(AMateria const& other);

  // Destructor
  virtual ~AMateria();

  // Operators
  AMateria& operator=(AMateria const& other);

  // Getters
  string const& getType() const;  // Returns the materia type

  // Methods
  virtual AMateria* clone() const = 0;  // TODO
  virtual void use(ICharacter& target);
};

#endif  // __AMATERIA_H__