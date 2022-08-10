/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jforner <jforner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 17:53:40 by jforner           #+#    #+#             */
/*   Updated: 2022/08/10 19:38:57 by jforner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <PresidentialPardonForm.hpp>

//constructor & destructor

PresidentialPardonForm::PresidentialPardonForm(std::string t) : Form(t, "PresidentialPardonForm", 25, 5)
{

  std::cout << "PresidentialPardonForm created !" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm &copy) : Form(copy)
{

  std::cout << "PresidentialPardonForm created from a copy!" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{

  std::cout << "PresidentialPardonForm destroyed!" << std::endl;
}

//operation overloader
PresidentialPardonForm&  PresidentialPardonForm::operator=(PresidentialPardonForm &copy)
{

	target = copy.target;
	return *this;
}

PresidentialPardonForm&  PresidentialPardonForm::operator=(const PresidentialPardonForm &copy)
{

	target = copy.target;
	return *this;
}
//getter & setter

//other
// void PresidentialPardonForm::execute(Bureaucrat & executor)
// {
// 	try 
// 	{
// 		if (!Form::getIsSign())
// 			throw Form::NotSignedException();
// 		if (executor.getGrade() >  Form::getExecGrade())
// 			throw Form::GradeTooLowException();
		
// 	}
// 	catch(std::exception & e)
// 	{
// 		std::cerr << executor.getName() << " Bureaucrat didn't execute " << name << " form because " << e.what() << std::endl;
// 	}
// }

void	PresidentialPardonForm::execution(void)
{
	std::cout << "Zaphod Beeblebrox forgive " << target << std::endl;
}
//bonus