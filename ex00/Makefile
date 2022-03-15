NAME := prog.out
CC := c++
CFLAGS := -Wall -Wextra -Werror -Wshadow -std=c++98
INC := -I include/
SRC := src/
SRC := $(wildcard $(SRC)*.cpp)
OBJ := $(SRC:%.cpp=%.o)

%.o: %.cpp
	$(CC) $(CFLAGS) $(INC) -c $< -o $@

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(INC) -o $@ $^

run: $(NAME)
	./$(NAME)

.PHONY: run re test clean

re: clean $(NAME)

clean:
	rm -f *.o $(NAME)
