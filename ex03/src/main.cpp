#include <cstdlib>
#include "tests.hpp"

typedef void (*test_func)();
test_func tests[] = {
    test_materia,
    test_materia_source,
    test_mandatory,
};
const int test_len = sizeof(tests) / sizeof(test_func);

void test_wait_input() {
  for (int i = 0; i < test_len; i++) {
    system("clear");
    tests[i]();
    if (i < test_len - 1)
      system("read");
  }
}

void test_all() {
  for (int i = 0; i < test_len; i++)
    tests[i]();
}

int main(int argc, char* argv[]) {
  (void)argv;
  if (argc != 1)
    test_wait_input();
  else
    test_all();
  return 0;
}
