CXX=c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98
CXXFLAGS += -I ./include

SRCS=main.cpp main.cpp Zombie.cpp zombieHorde.cpp
OBJECTS=$(patsubst %.cpp, %.o, $(SRCS))
NAME=zombie

all:$(NAME)

$(NAME) : $(OBJECTS)
	$(CXX) $(CXXFLAGS) -v -o $@ $^

%.o:%.cpp
	$(CXX) $(CXXFLAGS) -c -o $@ $^

clean:
	rm -rf $(OBJECTS)

fclean:
	make clean
	rm -rf $(NAME)

re:
	make fclean
	make all

.PHONY: clean fclean re bonus


