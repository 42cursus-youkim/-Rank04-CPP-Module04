#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>

using std::string;

class Brain {
 public:
  enum { BRAIN_SIZE = 100 };

  // Constructors
  Brain();
  Brain(const Brain& other);

  // Destructor
  ~Brain();

  // Operators
  Brain& operator=(const Brain& assign);

  // Getters
  const string& getIdea(int index) const;

 private:
  string _ideas[BRAIN_SIZE];
  const static string _pool[];
};

std::ostream& operator<<(std::ostream& os, const Brain& b);
#endif
