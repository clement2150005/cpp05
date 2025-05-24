// ╔══════════════════════════════════════════════════════════════════════════════════════════════╗
// ║ Author:                Clément Colin                                                         ║
// ║ Create Time:           2025-05-17 10:51:42                        |\      _,,,---,,_         ║
// ║ Modified by:           Clément Colin                        ZZZzz /,`.-'`'    -.  ;-;;,_     ║
// ║ Modified time:         2025-05-24 09:01:27                       |,4-  ) )-,_. ,\ (  `'-'    ║
// ║ Description:                                                    '---''(_/--'  `-'\_)         ║
// ╚══════════════════════════════════════════════════════════════════════════════════════════════╝

#include "Bureaucrat.hpp"
#include "Exceptions.hpp"
#include "CheckGrade.hpp"

//-----------------------------------------------------------------------------------------------//
//                                     CONSTRUCTORS / DESTRUCTOR                                 //
//-----------------------------------------------------------------------------------------------//

Bureaucrat::Bureaucrat() : _name("John Smith"), _grade(150) { checkGrade(_grade); }
Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade) { checkGrade(_grade); }
Bureaucrat::Bureaucrat(const Bureaucrat &other) : _name(other._name), _grade(other._grade) {}
Bureaucrat::~Bureaucrat() {}


//-----------------------------------------------------------------------------------------------//
//                                             GETTERS                                           //
//-----------------------------------------------------------------------------------------------//

const std::string Bureaucrat::getName() const { return _name; }
int Bureaucrat::getGrade() const { return _grade; }


//-----------------------------------------------------------------------------------------------//
//                                             METHODS                                           //
//-----------------------------------------------------------------------------------------------//

void Bureaucrat::incrementGrade()
{
	_grade--;
	checkGrade(_grade);
}

void Bureaucrat::decrementGrade()
{
	_grade++;
	checkGrade(_grade);
}

void Bureaucrat::signForm(AForm &form)
{
	
	try
	{
		form.beSigned(*this);
		std::cout << _name << " signed " << form.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout
			<< _name << " couldn't sign " << form.getName()
			<< " because: " << e.what() << std::endl;
	}
	
}

//-----------------------------------------------------------------------------------------------//
//                                       NON MEMBER FUNCTIONS                                    //
//-----------------------------------------------------------------------------------------------//

std::ostream &operator<<(std::ostream &out, const Bureaucrat &b)
{
	return (out << b.getName() << ", bureaucrat grade " << b.getGrade() << "." << std::endl);
}
