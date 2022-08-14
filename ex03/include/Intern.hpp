/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jforner <jforner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 15:53:50 by jforner           #+#    #+#             */
/*   Updated: 2022/08/14 16:42:09 by jforner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_H
# define INTERN_H
# include <string>
# include <iostream>
# include <cstring>
# include <fstream>
# include "Form.hpp"

class Intern {

private :

public:
	Intern(void);
	~Intern(void);

	Form	*makeForm(std::string fname, std::string ftarget);
};


Form	*pardon(std::string ftarget);
Form	*request(std::string ftarget);
Form	*creation(std::string ftarget);
#endif