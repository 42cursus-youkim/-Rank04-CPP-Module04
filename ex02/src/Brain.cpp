#include "Brain.hpp"
#include <stdlib.h>
#include <iostream>

using std::cout;

// Constructors
Brain::Brain() {
  // clang-format off
  const string pool[] = {
    "🍏", "🍎", "🍐", "🍊", "🍋", "🍌", "🍉", "🍇",
    "🍓", "🫐", "🍈", "🍒", "🍑", "🥭", "🍍", "🥥",
    "🥝", "🍅", "🍆", "🥑", "🥦", "🥬", "🥒", "🌶",
    "🫑", "🌽", "🥕", "🫒", "🧄", "🧅", "🥔", "🥐",
    "🥯", "🍞", "🥖", "🥨", "🧀", "🥚", "🍳", "🧈",
    "🥞", "🧇", "🥓", "🥩", "🍗", "🍖", "🦴", "🌭",
    "🍔", "🍟", "🍕", "🫓", "🥪", "🥙", "🧆", "🌮",
    "🌯", "🫔", "🥗", "🥘", "🫕", "🥫", "🍝", "🍜",
    "🍲", "🍛", "🍣", "🍱", "🥟", "🦪", "🍤", "🍙",
    "🍚", "🍘", "🍥", "🥠", "🥮", "🍢", "🍡", "🍧",
    "🍦", "🥧", "🧁", "🍰", "🎂", "🍮", "🍭", "🍬",
    "🍫", "🍿", "🍩", "🍪", "🌰", "🥜", "🍯", "🥛",
    "🍼", "🫖", "☕", "🍵", "🧃", "🥤", "🧋", "🧂",
    "🍶", "🍺", "🍻", "🥂", "🍷", "🥃", "🍸", "🍹",
    "🧉", "🍾", "🧊", "🥄", "🍴", "🍽", "🥣", "🥡",
  };
  // clang-format on
  cout << "Constructing brain =>\n";
  for (int i = 0; i < 100; i++) {
    _ideas[i] = pool[rand() % (sizeof(pool) / sizeof(string))];
    cout << _ideas[i];
  };
  cout << "\n";
}

Brain::Brain(const Brain& other) {
  for (int i = 0; i < 100; i++) {
    _ideas[i] = other.getIdea(i);
  }
}

// Destructor
Brain::~Brain() {
  cout << "brain destroyed\n";
}

// Operators
Brain& Brain::operator=(const Brain& assign) {
  if (this != &assign) {
    for (int i = 0; i < 100; i++) {
      _ideas[i] = assign.getIdea(i);
    }
  }
  return *this;
}

// Getters
const string& Brain::getIdea(int index) const {
  return _ideas[index];
}

std::ostream& operator<<(std::ostream& os, const Brain& b) {
  for (int i = 0; i < 100; i++)
    os << b.getIdea(i);
  return os;
}