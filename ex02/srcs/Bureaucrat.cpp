/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jforner <jforner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 04:04:10 by jforner           #+#    #+#             */
/*   Updated: 2022/08/08 15:00:48 by jforner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Bureaucrat.hpp>

//constructor & destructor

Bureaucrat::Bureaucrat(void) : name("Default")
{
	// name("Default");
	grade = 150;
	std::cout << "Bureaucrat " << name << " grade : " << grade << " created !" << std::endl;
}

Bureaucrat::Bureaucrat(std::string value, int g) : name(value)
{
	try
	{
		if (g < 1)
			throw Bureaucrat::GradeTooHighException();
		else if (g > 150)
			throw Bureaucrat::GradeTooLowException();
		else
			grade = g;
	}
	catch(std::exception & e)
	{
		std::cout << e.what() << std::endl;
		std::cout << "Set the grade at 150" << std::endl;
		grade = 150;
	}
	std::cout << "Bureaucrat " << name << " grade : " << grade << " created !" << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat &copy): name(copy.getName())
{
	grade = copy.getGrade();
	std::cout << "Bureaucrat " << name << " grade : " << grade << " created from a copy!" << std::endl;
}

Bureaucrat::~Bureaucrat(void)
{
	std::cout << "Bureaucrat " << name << " destroyed!" << std::endl;
}

//operation overloader
std::ostream&	operator<<(std::ostream& os, Bureaucrat& b2)
{
	os << b2.getName() << ", Bureaucrat grade " << b2.getGrade() << ".";
	return os;
}

Bureaucrat& Bureaucrat::operator=(Bureaucrat &copy)
{
	grade = copy.grade;
	return *this;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &copy)
{
	grade = copy.grade;
	return *this;
}

//getter & setter

std::string Bureaucrat::getName()
{
    return this->name;
}

int Bureaucrat::getGrade()
{
    return this->grade;
}

void Bureaucrat::setGrade(int g)
{
	this->grade = g;
}
//other

void	Bureaucrat::gradePlus(void)
{
	grade--;
	try
	{
		if (grade < 1)
			throw Bureaucrat::GradeTooHighException();
	}
	catch(std::exception & e)
	{
		std::cout << e.what() << std::endl;
		std::cout << "Set the grade at 1" << std::endl;
		grade = 1;
	}
}

void	Bureaucrat::gradeMinus(void)
{
	grade++;
	try
	{
		if (grade > 150)
			throw Bureaucrat::GradeTooLowException();
	}
	catch(std::exception & e)
	{
		std::cout << e.what() << std::endl;
		std::cout << "Set the grade at 150" << std::endl;
		grade = 150;
	}
}
//bonus

//exception
const char *	Bureaucrat::GradeTooHighException::what(void) const throw()
{
	return ("Grade is too high !");
}

const char *	Bureaucrat::GradeTooLowException::what(void) const throw()
{
	return ("Grade is too low !");
}