#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>

class Brain {
 public:
  // Constructors
  Brain();
  Brain(const Brain& copy);

  // Destructor
  ~Brain();

  // Operators
  Brain& operator=(const Brain& assign);

 private:
};

#endif