#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
  private:
    Brain* _brain;
 public:
  // Constructors
  Cat();
  Cat(const string& type);
  Cat(Cat const& other);

  // Destructor
  ~Cat();

  // Operators
  Cat& operator=(Cat const& other);

  // Getters
  const Brain& getBrain() const;

  // Methods
  void makeSound() const;
};


#endif  // CAT_HPP
