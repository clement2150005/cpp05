#  ╔══════════════════════════════════════════════════════════════════════════════════════════════╗
#  ║ Author:                Clément Colin                                                         ║
#  ║ Create Time:           2025-05-17 10:51:42                        |\      _,,,---,,_         ║
#  ║ Modified by:           Clément Colin                        ZZZzz /,`.-'`'    -.  ;-;;,_     ║
#  ║ Modified time:         2025-05-17 12:05:43                       |,4-  ) )-,_. ,\ (  `'-'    ║
#  ║ Description:                                                    '---''(_/--'  `-'\_)         ║
#  ╚══════════════════════════════════════════════════════════════════════════════════════════════╝

NAME        =   At\ least\ this\ beats\ coffee-making
SRC_DIR     =   src
OBJ_DIR     =   obj
INCLUDE_DIR =   include
CXX         =   c++
CXXFLAGS    =   -Wall -Werror -Wextra -std=c++98 -I$(INCLUDE_DIR)
RM          =   rm -rf

SRCS        =   $(shell find $(SRC_DIR) -name '*.cpp')
OBJS        =   $(SRCS:$(SRC_DIR)/%.cpp=$(OBJ_DIR)/%.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(OBJS) -o $(NAME)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	@mkdir -p $(@D)
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ_DIR)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
