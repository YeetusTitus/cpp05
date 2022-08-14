/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jforner <jforner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 05:38:40 by jforner           #+#    #+#             */
/*   Updated: 2022/08/14 17:53:29 by jforner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <Bureaucrat.hpp>
#include <Form.hpp>
#include <ShrubberyCreationForm.hpp>
#include <RobotomyRequestForm.hpp>
#include <PresidentialPardonForm.hpp>
#include <Intern.hpp>

int main(void)
{
    {
        std::cout <<  "\033[0;31m";


        Bureaucrat  j("Jose", 5);

        Intern      v;
        
        Form        *b;
        std::cout <<  "\033[0;34m";

        std::cout << j << std::endl;

        std::cout <<  "\033[0;32m";

        b = v.makeForm("enForm", "bender");

        if (b == NULL)
            b = v.makeForm("RobotomyRequestForm", "bender");
        b->beSigned(j);
        b->execute(j);
        delete b;
        
        b = v.makeForm("ShrubberyCreationForm", "skate-park");
        b->beSigned(j);
        b->execute(j);
        std::cout <<  "\033[0;31m";
        delete b;
    }
    std::cout <<  "\033[0m";
    // system("leaks bureaucrats");
    return 0;
}