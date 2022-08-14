/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jforner <jforner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 15:57:25 by jforner           #+#    #+#             */
/*   Updated: 2022/08/14 17:50:40 by jforner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Intern.hpp>
#include <ShrubberyCreationForm.hpp>
#include <PresidentialPardonForm.hpp>
#include <RobotomyRequestForm.hpp>

//constructor & destructor

Intern::Intern(void)
{

  std::cout << "Intern created !" << std::endl;
}

Intern::~Intern(void)
{

  std::cout << "Intern destroyed!" << std::endl;
}

//operation overloader

//getter & setter

//other

Form	*Intern::makeForm(std::string fname, std::string ftarget)
{
    Form    	*(*functionP[])(std::string ftarget) = {&pardon, &request, &creation};
	std::string	formType[3] = {"PresidentialPardonForm", "RobotomyRequestForm", "ShrubberyCreationForm"};
    
    for (int i=0; i < 3; i++)
	{
		if (fname == formType[i])
        {
			std::cout << "Intern creates " << formType[i] << std::endl;
			return (functionP[i](ftarget));
        }
	}
	std::cerr << fname << " is not a valid form" << std::endl;
    return NULL;
}
//bonus

Form	*pardon(std::string ftarget)
{
    return (new PresidentialPardonForm(ftarget));
}


Form	*request(std::string ftarget)
{
    return (new RobotomyRequestForm(ftarget));
}


Form	*creation(std::string ftarget)
{
    return (new ShrubberyCreationForm(ftarget));
}