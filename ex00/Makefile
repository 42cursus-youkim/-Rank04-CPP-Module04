NAME := prog.out
CXX  := c++
CPPFLAGS := -Wall -Wextra -Werror -Wshadow -std=c++98 -Iinclude/
SRC := $(wildcard src/*.cpp)
OBJ := $(SRC:%.cpp=%.o)

.PHONY: run re clean

$(NAME): $(OBJ)
	$(CXX) $(CPPFLAGS) -o $@ $^

run: $(NAME)
	./$(NAME)

re: clean $(NAME)

clean:
	$(RM) $(wildcard $(OBJ)) $(NAME)
