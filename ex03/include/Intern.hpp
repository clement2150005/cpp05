// ╔══════════════════════════════════════════════════════════════════════════════════════════════╗
// ║ Author:                Clément Colin                                                         ║
// ║ Create Time:           2025-05-27 10:46:15                        |\      _,,,---,,_         ║
// ║ Modified by:           Clément Colin                        ZZZzz /,`.-'`'    -.  ;-;;,_     ║
// ║ Modified time:         2025-05-27 12:27:49                       |,4-  ) )-,_. ,\ (  `'-'    ║
// ║ Description:                                                    '---''(_/--'  `-'\_)         ║
// ╚══════════════════════════════════════════════════════════════════════════════════════════════╝

#pragma once
#include "AForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include <cstddef>
#include <iostream>

class Intern
{
private:
	struct	formFactory
	{
		const char *name;
		AForm *(*func)(std::string const &target);
	};
	
public:

//-----------------------------------------------------------------------------------------------//
//                                     CONSTRUCTORS / DESTRUCTOR                                 //
//-----------------------------------------------------------------------------------------------//

	Intern();
	Intern(const Intern &other);
	Intern &operator=(const Intern &other);
	~Intern();

//-----------------------------------------------------------------------------------------------//
//                                             METHODS                                           //
//-----------------------------------------------------------------------------------------------//

	AForm *makeForm(std::string name, std::string target);

	
};
