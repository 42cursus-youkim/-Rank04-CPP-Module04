#ifndef __AMATERIA_H__
#define __AMATERIA_H__

#include <string>
#include "ICharacter.hpp"

using std::string;

class AMateria {
 protected:
  string _type;

 private:
  /*
   * While assigning a Materia to another, copying the type doesn’t make sense.
   * However Materia only has type as their sole member value.
   * Hence copying or assigning Materia has of no use and is not allowed.
   */
  // Disabled Members
  AMateria();
  AMateria(AMateria const& other);
  AMateria& operator=(AMateria const& other);

 public:
  // Constructor
  AMateria(string const& type);

  // Destructor
  virtual ~AMateria();

  // Operators

  // Getters
  string const& getType() const;  // Returns the materia type

  // Abstract Method
  virtual AMateria* clone() const = 0;

  // Methods
  virtual void use(ICharacter& target);
};

#endif  // __AMATERIA_H__
