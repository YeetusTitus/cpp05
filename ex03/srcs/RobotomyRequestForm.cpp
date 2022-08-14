/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jforner <jforner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 12:12:56 by jforner           #+#    #+#             */
/*   Updated: 2022/08/14 15:35:56 by jforner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <RobotomyRequestForm.hpp>

//constructor & destructor

RobotomyRequestForm::RobotomyRequestForm(std::string t) : Form(t, "RobotomyRequestForm", 72, 45)
{

srand(time(NULL));
  std::cout << t << " RobotomyRequestForm created !" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm &copy) : Form(copy)
{
	srand(time(NULL));
  std::cout << "RobotomyRequestForm created from a copy!" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{

  std::cout << "RobotomyRequestForm destroyed!" << std::endl;
}

//operation overloader
RobotomyRequestForm&  RobotomyRequestForm::operator=(RobotomyRequestForm &copy)
{
	target = copy.target;
	return *this;
}

RobotomyRequestForm&  RobotomyRequestForm::operator=(const RobotomyRequestForm &copy)
{
	target = copy.target;
	return *this;
}
//getter & setter

//other

//bonus

void    RobotomyRequestForm::execution(void)const
{
	if (rand() % 2)
		std::cout << "*Drill sound effect#0* "<< target << " did become a robot :)" << std::endl ;
	else
		std::cout << target << " didn't become a robot :(" << std::endl ;
}