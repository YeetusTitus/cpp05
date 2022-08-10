/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jforner <jforner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 05:38:40 by jforner           #+#    #+#             */
/*   Updated: 2022/08/10 20:03:18 by jforner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <Bureaucrat.hpp>
#include <Form.hpp>
#include <ShrubberyCreationForm.hpp>
#include <RobotomyRequestForm.hpp>
#include <PresidentialPardonForm.hpp>

int main(void)
{
    {
        std::cout <<  "\033[0;31m";
        Bureaucrat  j("Jose", 5);
        Bureaucrat  k("Denis", 149);


        ShrubberyCreationForm	a("garden");
        RobotomyRequestForm     b("The Zuck");
        PresidentialPardonForm	c("Bebou");
        std::cout <<  "\033[0;34m";

        std::cout << j << std::endl;
        std::cout << k << std::endl;
        std::cout << a << std::endl;
        std::cout << b << std::endl;
        std::cout << c << std::endl;
        std::cout << k << std::endl;
    //    Form    d("Bruh");

        std::cout <<  "\033[0;32m";
        b.beSigned(k);
        b.execute(j);
        b.beSigned(j);
		k.executeForm(b);
        // b.execute(k);
        for(int i=0;i < 5; i++)
		    b.execute(j);

        std::cout <<  "\033[0;35m";
        a.beSigned(k);
		a.execute(j);
        a.beSigned(j);
		a.execute(k);
		a.execute(j);


        std::cout <<  "\033[0;33m";
        c.beSigned(k);
		c.execute(j);
        c.beSigned(j);
		c.execute(k);
		c.execute(j);
        
        std::cout <<  "\033[0;31m";
    }
    std::cout <<  "\033[0m";
    // system("leaks bureaucrats");
    return 0;
}