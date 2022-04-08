#include "Brain.hpp"
#include <stdlib.h>
#include <iostream>
#include <stdexcept>
#include "util.hpp"

using std::cout;

// clang-format off
const string pool[] = {
  "🍏", "🍎", "🍐", "🍊", "🍋", "🍌", "🍉", "🍇",
  "🍓", "🥡", "🍈", "🍒", "🍑", "🥭", "🍍", "🥥",
  "🥝", "🍅", "🍆", "🥑", "🥦", "🥬", "🥒", "🌶",
  "🍽", "🌽", "🥕", "🥣", "🧄", "🧅", "🥔", "🥐",
  "🥯", "🍞", "🥖", "🥨", "🧀", "🥚", "🍳", "🧈",
  "🥞", "🧇", "🥓", "🥩", "🍗", "🍖", "🦴", "🌭",
  "🍔", "🍟", "🍕", "🍴", "🥪", "🥙", "🧆", "🌮",
  "🌯", "🧊", "🥗", "🥘", "🥫", "🍝", "🍜", "🍹",
  "🍲", "🍛", "🍣", "🍱", "🥟", "🦪", "🍤", "🍙",
  "🍚", "🍘", "🍥", "🥠", "🥮", "🍢", "🍡", "🍧",
  "🍦", "🥧", "🧁", "🍰", "🎂", "🍮", "🍭", "🍬",
  "🍫", "🍿", "🍩", "🍪", "🌰", "🥜", "🍯", "🥛",
  "🍼", "🍾", "🥃", "🍵", "🧃", "🥤", "🧂", "🧉",
  "🍶", "🍺", "🍻", "🥂", "🍷", "🍸",
};
// clang-format on

// Constructors
Brain::Brain() {
  LOG_CLASS;
  for (int i = 0; i < BRAIN_SIZE; i++)
    _ideas[i] =
        pool[rand() % static_cast<int>((sizeof(pool) / sizeof(string)))];
  cout << *this << "\n";
}

Brain::Brain(const Brain& other) {
  LOG_CLASS_COPY;
  for (int i = 0; i < BRAIN_SIZE; i++)
    _ideas[i] = other.getIdea(i);
  cout << *this << "\n";
}

// Destructor
Brain::~Brain() {
  LOG_CLASS;
}

// Operators
Brain& Brain::operator=(const Brain& assign) {
  if (this != &assign)
    for (int i = 0; i < BRAIN_SIZE; i++)
      _ideas[i] = assign.getIdea(i);

  return *this;
}

// Getters
const string& Brain::getIdea(int index) const {
  if (index < 0 || index >= BRAIN_SIZE)
    throw std::out_of_range("index out of range");
  return _ideas[index];
}

std::ostream& operator<<(std::ostream& os, const Brain& b) {
  for (int i = 0; i < Brain::BRAIN_SIZE / 10; i++)
    os << b.getIdea(i);
  return os;
}
