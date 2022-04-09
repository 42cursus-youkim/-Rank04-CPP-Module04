NAME := prog.out
CXX := c++
CXXFLAGS := -Wall -Wextra -Werror -Wconversion -pedantic \
						-std=c++98 -g																	 \
						-I include/ -I interface/ -I util/


SRC := $(wildcard src/*.cpp) $(wildcard test/*.cpp)
OBJ := $(SRC:%.cpp=%.o)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $@ $^

.PHONY: re clean run leak

re: clean $(NAME)

clean:
	rm -f $(OBJ) $(NAME)

run: $(NAME)
	./$(NAME) wait


leak:
	colour-valgrind ./$(NAME)
