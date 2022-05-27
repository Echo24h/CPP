# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gborne <gborne@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/19 14:53:10 by gborne            #+#    #+#              #
#    Updated: 2022/05/22 17:48:57 by gborne           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			= main.cpp PhoneBook.cpp Contact.cpp
OBJS			= $(SRCS:.cpp=.o)

CXX				= g++
RM				= rm -f
CXXFLAGS		= -Wall -Wextra -Werror -std=c++98

NAME			= phonebook

all:			$(NAME)

$(NAME):		$(OBJS)
				$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

test:			$(NAME)
				./phonebook

.PHONY:			all clean fclean re test
