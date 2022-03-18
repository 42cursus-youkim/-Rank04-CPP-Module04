#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>
#include <iostream>

using std::string;

class Brain {
 private:
  string _ideas[100];

 public:
  // Constructors
  Brain();
  Brain(const Brain& other);

  // Destructor
  ~Brain();

  // Operators
  Brain& operator=(const Brain& assign);

  // Getters
  const string& getIdea(int index) const;

};

std::ostream& operator<<(std::ostream& os, const Brain& b);
#endif