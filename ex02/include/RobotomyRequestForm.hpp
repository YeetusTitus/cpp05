/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jforner <jforner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 12:05:33 by jforner           #+#    #+#             */
/*   Updated: 2022/08/10 19:44:39 by jforner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_H
# define ROBOTOMYREQUESTFORM_H
# include <string>
# include <iostream>
# include <cstring>
# include <fstream>
# include "Form.hpp"

class RobotomyRequestForm : public Form {

private :
void	execution(void);

public:
    RobotomyRequestForm(std::string t);
    ~RobotomyRequestForm(void);


    RobotomyRequestForm(RobotomyRequestForm &copy);


    RobotomyRequestForm& operator=(RobotomyRequestForm &copy);
    RobotomyRequestForm& operator=(const RobotomyRequestForm &copy);


};

#endif