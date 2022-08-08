/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jforner <jforner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 10:40:15 by jforner           #+#    #+#             */
/*   Updated: 2022/08/08 17:51:31 by jforner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ShrubberyCreationForm.hpp>

//constructor & destructor

ShrubberyCreationForm::ShrubberyCreationForm(std::string t) : Form(t, "ShrubberyCreationForm", 145, 137)
{
  std::cout << "ShrubberyCreationForm created !" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm &copy) : Form(copy)
{

  std::cout << "ShrubberyCreationForm created from a copy!" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{

  std::cout << "ShrubberyCreationForm destroyed!" << std::endl;
}

//operation overloader

ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm &copy)
{
  target = copy.target;
  return *this;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm &copy)
{
  target = copy.target;
  return *this;
}

//getter & setter

//other
void ShrubberyCreationForm::execute(Bureaucrat & executor)
{
	try 
	{
		if (!Form::getIsSign())
			throw Form::NotSignedException();
		else if (executor.getGrade() >  Form::getExecGrade())
			throw Form::GradeTooLowException();
		else
			ShrubberyCreationForm::printThree();
	}
	catch(std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "ca marche \n";

}
//bonus
void    ShrubberyCreationForm::printThree(void)
{
	std::ofstream	sfile(target + "_shrubbery", std::ios::trunc);
	if (!sfile)
	{
		throw Form::FileNotOpenning();
		return ;
	}
	std::string str("\n");
	str += "<><><><><>\n";
	str += " \\ \\  / /<>\n";
	str += "  \\*| | /-*\n" ;
	str += " *-\\| |/*\n" ;
	str += "    | |\n" ;
	str += "    | |\n" ;
	str += "    | |\n" ;
	str += "    | |\n" ;
	str += "   /   \\\n";
	sfile.write(&str[0], str.length());
	sfile.close();
}