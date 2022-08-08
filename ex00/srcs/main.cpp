/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jforner <jforner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 05:38:40 by jforner           #+#    #+#             */
/*   Updated: 2022/08/04 16:53:01 by jforner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <Bureaucrat.hpp>

int main(void)
{
    {
        std::cout <<  "\033[0;31m";
        Bureaucrat  i;
        Bureaucrat  j("Jose", 5);
        Bureaucrat  k("Denis", 151);
        Bureaucrat  l(j);
        
        std::cout <<  "\033[0;34m";
        i.gradeMinus();
        j.gradeMinus();
        k.gradePlus();
        for(int i = 5; i > 0; i--)
            l.gradePlus();

        std::cout << i << std::endl;
        std::cout << j << std::endl;
        std::cout << k << std::endl;
        std::cout << l << std::endl;
        std::cout <<  "\033[0;31m";
    }
    std::cout <<  "\033[0m";
    // system("leaks bureaucrats");
    return 0;
}