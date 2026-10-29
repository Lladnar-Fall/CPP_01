NAME     = violence
SRC      = src/main.cpp src/Weapon.cpp src/HumanA.cpp src/HumanB.cpp
HEADERS  = Weapon.hpp HumanA.hpp HumanB.hpp

OBJ      = $(SRC:.cpp=.o)
CXX      = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp $(HEADERS)
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re