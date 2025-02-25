CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
TARGET = a.out
SRCS = Animal.cpp \
	Dog.cpp \
	Cat.cpp \
	WrongAnimal.cpp \
	WrongCat.cpp \
	Brain.cpp \
	main.cpp

OBJS = $(SRCS:.cpp=.o)

$(TARGET): $(OBJS)
	$(CC) $^ -o $@

$(OBJS): $(SRCS)
	$(CC) $(CFLAGS) -c $^

.PHONY: all fclean clean re

all: $(TARGET)

fclean: clean
	rm $(TARGET)

clean:
	rm $(OBJS)

re: fclean all