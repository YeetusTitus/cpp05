/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jforner <jforner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 10:06:12 by jforner           #+#    #+#             */
/*   Updated: 2022/08/08 17:43:58 by jforner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHUREBBERYCREATIONFORM_H
# define SHUREBBERYCREATIONFORM_H
# include <string>
# include <iostream>
# include <cstring>
# include <fstream>
# include "Form.hpp"

class ShrubberyCreationForm : public Form {


public:
    ShrubberyCreationForm(std::string t);
    ~ShrubberyCreationForm(void);
    
    ShrubberyCreationForm(ShrubberyCreationForm &copy);
    
    std::string	getName(void);
	bool		getIsSign(void);
	int			getSignGrade(void);
	int			getExecGrade(void);
	std::string	getTarget(void);

    ShrubberyCreationForm& operator=(ShrubberyCreationForm &copy);
    ShrubberyCreationForm& operator=(const ShrubberyCreationForm &copy);


    
    void    execute(Bureaucrat & executor);

    void    printThree(void);
};

#endif