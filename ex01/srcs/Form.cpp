/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jforner <jforner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 17:19:01 by jforner           #+#    #+#             */
/*   Updated: 2022/08/15 18:09:53 by jforner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Form.hpp>
# include <Bureaucrat.hpp>

//constructor & destructor

Form::Form(void) : name("default"), isSign(false),  signGrade(150), execGrade(150)
{

  std::cout << "Form created !" << std::endl;
}

Form::Form(const std::string n, int sg, int eg) : name(n), isSign(false),
	signGrade(assigngrade(sg, "signGrade")), execGrade(assigngrade(eg, "execGrade"))
{

  std::cout << n << " Form created !" << std::endl;
}

Form::Form(Form &copy) : name(copy.getName()), isSign(copy.getIsSign()), signGrade(copy.getSignGrade()),
	execGrade(copy.getExecGrade())
{

  std::cout << "Form created from a copy!" << std::endl;
}

Form::~Form(void)
{

  std::cout << "Form " << name << " destroyed!" << std::endl;
}

//operation overloader

std::ostream&	operator<<(std::ostream& os, Form& f2)
{
    os << f2.getName() << ", Form";
    if (f2.getIsSign())
	    os << " is signed";
    else
	    os << " is not signed";
    os << "\tsign grade = " << f2.getSignGrade() << "\tExecute grade = "
        << f2.getExecGrade() << ".";
	return os;
}

Form& Form::operator=(Form &copy)
{
	isSign = copy.isSign;
	return *this;
}

Form& Form::operator=(const Form &copy)
{
	isSign = copy.isSign;
	return *this;
}

//getter & setter
std::string	Form::getName(void)
{
    return name;
}
bool		Form::getIsSign(void)
{
    return isSign;
}
int			Form::getSignGrade(void)
{
    return signGrade;
}
int			Form::getExecGrade(void)
{
    return execGrade;
}
//other
void	Form::beSigned(Bureaucrat & b)
{
    try
    {
		if(isSign)
			throw AlreadySignedException();
        if (b.getGrade() > signGrade)
            throw GradeTooLowException();
		isSign = true;
    }
    catch(const std::exception& e)
    {
		std::cerr << b.getName() << " bureaucrat couldn't sign " << this->getName() << " form because " << e.what() << std::endl;
    }

}
//bonus
int Form::assigngrade(int g, std::string message)
{
 try
	{
		if (g < 1)
			throw Form::GradeTooHighException();
		if (g > 150)
			throw Form::GradeTooLowException();
		return (g);
	}
	catch(std::exception & e)
	{
		std::cerr << e.what() << std::endl;
		std::cout << "Set the " << message << " at 150" << std::endl;
		return(150);
	}
}
//exception
const char *	Form::GradeTooHighException::what(void) const throw()
{
	return ("Grade is too high !");
}

const char *	Form::GradeTooLowException::what(void) const throw()
{
	return ("Grade is too low !");
}

const char *	Form::AlreadySignedException::what(void) const throw()
{
	return ("This form is already Signed !");
}