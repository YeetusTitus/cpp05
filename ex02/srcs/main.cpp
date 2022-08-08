/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jforner <jforner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 05:38:40 by jforner           #+#    #+#             */
/*   Updated: 2022/08/08 17:50:23 by jforner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <Bureaucrat.hpp>
#include <Form.hpp>
#include <ShrubberyCreationForm.hpp>

int main(void)
{
    {
        std::cout <<  "\033[0;31m";
        Bureaucrat  j("Jose", 5);
        Bureaucrat  k("Denis", 149);

        ShrubberyCreationForm	a("garden");

        std::cout <<  "\033[0;34m";
        a.beSigned(j);
		a.execute(j);
        std::cout <<  "\033[0;31m";
        
        std::cout <<  "\033[0;34m";

        std::cout << j << std::endl;
        std::cout << k << std::endl;
        std::cout <<  "\033[0;31m";
    }
    std::cout <<  "\033[0m";
    // system("leaks bureaucrats");
    return 0;
}