SRCS = main.cpp Bureaucrat.cpp Form.cpp ShrubberyCreationForm.cpp RobotomyRequestForm.cpp \
PresidentialPardonForm.cpp Intern.cpp

DIRECTORYS = srcs/

SRCSD =	$(addprefix ${DIRECTORYS}, $(SRCS))

EFLAGS = -Wall -Wextra -Werror

CFLAGS = -std=c++98

OBJS =	${SRCSD:.cpp=.o}

NAME   = bureaucrats

%.o: %.cpp ${HEADER}
	clang++ -c ${CFLAGS} ${EFLAGS} -o $@ $< ${INCLUD}

INCLUD = -I./include

${NAME}: ${OBJS}
	clang++ $(EFLAGS) ${CFLAGS} -o $(NAME) ${INCLUD} ${SRCSD}

all:	${NAME}

clean:
		rm  -f ${OBJS}

fclean:	clean
		rm  -f ${NAME}

re:		fclean all

.PHONY:	all clean fclean re