/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jforner <jforner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 17:11:03 by jforner           #+#    #+#             */
/*   Updated: 2022/08/15 18:49:25 by jforner          ###   ########.fr       */
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

protected :


const std::string	name;
bool				isSign;
const int			signGrade;
const int			execGrade;
std::string			target;


public:
    Form(std::string t);
    virtual ~Form(void);
        
    Form(Form &copy);
	Form(std::string t, const std::string n, int sg, int eg);

    Form& operator=(Form &copy);
    Form& operator=(const Form &copy);

	std::string	getName(void)const;
	bool		getIsSign(void)const;
	int			getSignGrade(void)const;
	int			getExecGrade(void)const;
	std::string	getTarget(void)const;

    void execute(Bureaucrat const & executor)const;

	virtual void execution()const = 0;
	
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

	class NotSignedException : public std::exception
	{
		public:
		const char *	what(void) const throw();
	};

	class FileNotOpenning : public std::exception
	{
		public:
		const char *	what(void) const throw();
	};
};
std::ostream&	operator<<(std::ostream& os, Form& f2);
#endif