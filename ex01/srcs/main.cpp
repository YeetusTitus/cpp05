/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jforner <jforner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 05:38:40 by jforner           #+#    #+#             */
/*   Updated: 2022/08/08 15:44:29 by jforner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <Bureaucrat.hpp>
#include <Form.hpp>

int main(void)
{
    {
        std::cout <<  "\033[0;31m";
        Bureaucrat  j("Jose", 5);
        Bureaucrat  k("Denis", 149);

        Form        a;
        Form        b("ulaire", 151, 5);
        Form        c("ation", 1, 1);

        std::cout <<  "\033[0;34m";
        b.beSigned(k);
        std::cout <<  "\033[0;31m";
        Form        d(b);
        
        std::cout <<  "\033[0;34m";

        c.beSigned(j);
        d.beSigned(j);
        std::cout << j << std::endl;
        std::cout << k << std::endl;
        std::cout << a << std::endl;
        std::cout << b << std::endl;
        std::cout << c << std::endl;
        std::cout << d << std::endl;
        std::cout <<  "\033[0;31m";
    }
    std::cout <<  "\033[0m";
    // system("leaks bureaucrats");
    return 0;
}