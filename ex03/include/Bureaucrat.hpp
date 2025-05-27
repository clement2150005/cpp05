// ╔══════════════════════════════════════════════════════════════════════════════════════════════╗
// ║ Author:                Clément Colin                                                         ║
// ║ Create Time:           2025-05-17 10:51:42                        |\      _,,,---,,_         ║
// ║ Modified by:           Clément Colin                        ZZZzz /,`.-'`'    -.  ;-;;,_     ║
// ║ Modified time:         2025-05-26 12:15:11                       |,4-  ) )-,_. ,\ (  `'-'    ║
// ║ Description:                                                    '---''(_/--'  `-'\_)         ║
// ╚══════════════════════════════════════════════════════════════════════════════════════════════╝

#pragma once
#include <iostream>

class AForm;

class Bureaucrat
{
private:
	const std::string	_name;
	int					_grade;
	
	Bureaucrat &operator=(const Bureaucrat &other);

public:
//-----------------------------------------------------------------------------------------------//
//                                     CONSTRUCTORS / DESTRUCTOR                                 //
//-----------------------------------------------------------------------------------------------//

	Bureaucrat();
	Bureaucrat(std::string name, int grade);
	Bureaucrat(const Bureaucrat &other);
	~Bureaucrat();


//-----------------------------------------------------------------------------------------------//
//                                             GETTERS                                           //
//-----------------------------------------------------------------------------------------------//
	
	const std::string	getName() const;
	int					getGrade() const;

	
//-----------------------------------------------------------------------------------------------//
//                                             METHODS                                           //
//-----------------------------------------------------------------------------------------------//

	void	incrementGrade();
	void	decrementGrade();
	void	signForm(AForm &form);
	void	executeForm(AForm const &form) const;

};
//-----------------------------------------------------------------------------------------------//
//                                       NON MEMBER FUNCTIONS                                    //
//-----------------------------------------------------------------------------------------------//

std::ostream	&operator<<(std::ostream &out, const Bureaucrat &b);