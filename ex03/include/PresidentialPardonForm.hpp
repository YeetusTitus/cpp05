/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jforner <jforner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 17:03:07 by jforner           #+#    #+#             */
/*   Updated: 2022/08/14 15:36:19 by jforner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_H
# define PRESIDENTIALPARDONFORM_H
# include <string>
# include <iostream>
# include <cstring>
# include <fstream>
# include "Form.hpp"

class PresidentialPardonForm : public Form {

private :
void	execution(void)const;

public:
    PresidentialPardonForm(std::string t);
    ~PresidentialPardonForm(void);
        
    PresidentialPardonForm(PresidentialPardonForm &copy);

    PresidentialPardonForm& operator=(PresidentialPardonForm &copy);
    PresidentialPardonForm& operator=(const PresidentialPardonForm &copy);
};

#endif