/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jforner <jforner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 10:06:12 by jforner           #+#    #+#             */
/*   Updated: 2022/08/14 15:36:42 by jforner          ###   ########.fr       */
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

private:
    void	execution(void)const;

public:
    ShrubberyCreationForm(std::string t);
    ~ShrubberyCreationForm(void);
    
    ShrubberyCreationForm(ShrubberyCreationForm &copy);

    ShrubberyCreationForm& operator=(ShrubberyCreationForm &copy);
    ShrubberyCreationForm& operator=(const ShrubberyCreationForm &copy);

};

#endif