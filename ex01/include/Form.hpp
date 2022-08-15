/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jforner <jforner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 17:11:03 by jforner           #+#    #+#             */
/*   Updated: 2022/08/15 18:20:33 by jforner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_H
# define FORM_H
# include <string>
# include <iostream>
# include <cstring>
# include <fstream>
# include "Bureaucrat.hpp"


class Bureaucrat;

class Form {

private :
const std::string	name;
bool				isSign;
const int			signGrade;
const int			execGrade;

public:
    Form(void);
    ~Form(void);
        
    Form(Form &copy);
	Form(const std::string n, int sg, int eg);

	std::string	getName(void);
	bool		getIsSign(void);
	int			getSignGrade(void);
	int			getExecGrade(void);

    Form& operator=(Form &copy);
    Form& operator=(const Form &copy);
	
	void	beSigned(Bureaucrat & b);

	int assigngrade(int g, std::string message);

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

	class AlreadySignedException : public std::exception
	{
		public:
		const char *	what(void) const throw();
	};

};
std::ostream&	operator<<(std::ostream& os, Form& f2);
#endif