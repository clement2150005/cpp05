// ╔══════════════════════════════════════════════════════════════════════════════════════════════╗
// ║ Author:                Clément Colin                                                         ║
// ║ Create Time:           2025-05-15 09:45:35                        |\      _,,,---,,_         ║
// ║ Modified by:           Clément Colin                        ZZZzz /,`.-'`'    -.  ;-;;,_     ║
// ║ Modified time:         2025-05-17 11:59:41                       |,4-  ) )-,_. ,\ (  `'-'    ║
// ║ Description:                                                    '---''(_/--'  `-'\_)         ║
// ╚══════════════════════════════════════════════════════════════════════════════════════════════╝

#include "Bureaucrat.hpp"
#include "Exceptions.hpp"

//-----------------------------------------------------------------------------------------------//
//                                     CONSTRUCTORS / DESTRUCTOR                                 //
//-----------------------------------------------------------------------------------------------//

Bureaucrat::Bureaucrat() : _name("John Smith"), _grade(150) {checkGrade();}
Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade) {checkGrade();}
Bureaucrat::Bureaucrat(const Bureaucrat &other): _name(other._name), _grade(other._grade) {}
Bureaucrat::~Bureaucrat() {}


//-----------------------------------------------------------------------------------------------//
//                                             GETTERS                                           //
//-----------------------------------------------------------------------------------------------//

const std::string	Bureaucrat::getName() const {return _name;}
int					Bureaucrat::getGrade() const {return _grade;}


//-----------------------------------------------------------------------------------------------//
//                                             METHODS                                           //
//-----------------------------------------------------------------------------------------------//

void	Bureaucrat::checkGrade() const
{
	if (_grade < 1)
		throw GradeTooHighException();
	if (_grade > 150)
		throw GradeTooLowException();
}

void	Bureaucrat::incrementGrade()
{
	_grade--;
	checkGrade();
}

void	Bureaucrat::decrementGrade()
{
	_grade++;
	checkGrade();
}


//-----------------------------------------------------------------------------------------------//
//                                       NON MEMBER FUNCTIONS                                    //
//-----------------------------------------------------------------------------------------------//

std::ostream	&operator<<(std::ostream &out, const Bureaucrat &b)
{
	return (out << b.getName() << ", bureaucrat grade " << b.getGrade() << "." << std::endl);
}