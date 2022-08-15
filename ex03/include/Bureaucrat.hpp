/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jforner <jforner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 03:40:09 by jforner           #+#    #+#             */
/*   Updated: 2022/08/15 18:42:09 by jforner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H
# include <string>
# include <iostream>
# include <cstring>
# include <fstream>
# include <exception>
# include "Form.hpp"


class Form;

class Bureaucrat {

private :
    const std::string name;
    int grade;

public:
    Bureaucrat(void);
    ~Bureaucrat(void);
        
    Bureaucrat(std::string value, int g);
    Bureaucrat(Bureaucrat &copy);

    Bureaucrat& operator=(Bureaucrat &copy);
    Bureaucrat& operator=(const Bureaucrat &copy);

    std::string getName()const;
    int			getGrade()const;
	void setGrade(int g);

	void	gradePlus(void);
	void	gradeMinus(void);


	void	signForm(Form & f);
	void	executeForm(Form const & form)const;


	class GradeTooHighException : public std::exception
	{
		public:
		const char *	what(void) const throw();
	};

	class GradeTooLowException : public std::exception
	{
		public:
		const char *	what(void) const throw();
	};
};
std::ostream&	operator<<(std::ostream& os, Bureaucrat& b2);
#endif