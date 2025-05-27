// ╔══════════════════════════════════════════════════════════════════════════════════════════════╗
// ║ Author:                Clément Colin                                                         ║
// ║ Create Time:           2025-05-17 10:54:17                        |\      _,,,---,,_         ║
// ║ Modified by:           Clément Colin                        ZZZzz /,`.-'`'    -.  ;-;;,_     ║
// ║ Modified time:         2025-05-27 12:23:59                       |,4-  ) )-,_. ,\ (  `'-'    ║
// ║ Description:                                                    '---''(_/--'  `-'\_)         ║
// ╚══════════════════════════════════════════════════════════════════════════════════════════════╝

#pragma once
#include <iostream>

class Bureaucrat;

class AForm
{
private:
	const std::string	_name;
	bool				_signed;
	const int			_signGrade;
	const int			_execGrade;

	AForm &operator=(const AForm &other);
	
public:

//-----------------------------------------------------------------------------------------------//
//                                     CONSTRUCTORS / DESTRUCTOR                                 //
//-----------------------------------------------------------------------------------------------//

	AForm();
	AForm(std::string name, int signGrade, int execGrade);
	AForm(const AForm &other);
	virtual ~AForm();


//-----------------------------------------------------------------------------------------------//
//                                             GETTERS                                           //
//-----------------------------------------------------------------------------------------------//

	const std::string	getName() const;
	bool				getSigned() const;
	int					getsignGrade() const;
	int					getExecGrade() const;


//-----------------------------------------------------------------------------------------------//
//                                             METHODS                                           //
//-----------------------------------------------------------------------------------------------//

	void				beSigned(Bureaucrat &bureaucrat);
	void				execute(Bureaucrat const &executor) const;
	virtual void		executeAction() const = 0;
};


//-----------------------------------------------------------------------------------------------//
//                                       NON MEMBER FUNCTIONS                                    //
//-----------------------------------------------------------------------------------------------//

std::ostream	&operator<<(std::ostream &out, const AForm &b);