// ╔══════════════════════════════════════════════════════════════════════════════════════════════╗
// ║ Author:                Clément Colin                                                         ║
// ║ Create Time:           2025-05-17 10:54:11                        |\      _,,,---,,_         ║
// ║ Modified by:           Clément Colin                        ZZZzz /,`.-'`'    -.  ;-;;,_     ║
// ║ Modified time:         2025-05-23 10:00:24                       |,4-  ) )-,_. ,\ (  `'-'    ║
// ║ Description:                                                    '---''(_/--'  `-'\_)         ║
// ╚══════════════════════════════════════════════════════════════════════════════════════════════╝

#include "Form.hpp"
#include "CheckGrade.hpp"

//-----------------------------------------------------------------------------------------------//
//                                     CONSTRUCTORS / DESTRUCTOR                                 //
//-----------------------------------------------------------------------------------------------//

Form::Form() : _name("untitledForm"), _signed(false), _signGrade(75), _execGrade(75)
{
	checkGrade(_signGrade);
	checkGrade(_execGrade);
}

Form::Form(std::string name, int signGrade, int execGrade) :
	_name(name),
	_signed(false),
	_signGrade(signGrade),
	_execGrade(execGrade)
{
	checkGrade(_signGrade);
	checkGrade(_execGrade);
}

Form::Form(const Form &other) :
	_name(other._name),
	_signed(other._signed),
	_signGrade(other._signGrade),
	_execGrade(other._execGrade)
{
	checkGrade(_signGrade);
	checkGrade(_execGrade);
}

Form::~Form() {}

//-----------------------------------------------------------------------------------------------//
//                                             GETTERS                                           //
//-----------------------------------------------------------------------------------------------//

const std::string	Form::getName() const {return _name ;}
bool				Form::getSigned() const {return _signed ;}
int					Form::getsignGrade() const {return _signGrade ;}
int					Form::getExecGrade() const {return _execGrade ;}

//-----------------------------------------------------------------------------------------------//
//                                       NON MEMBER FUNCTIONS                                    //
//-----------------------------------------------------------------------------------------------//

std::ostream &operator<<(std::ostream &out, const Form &b)
{
	std::string isSigned = b.getSigned() ? "\033[32m Yes\033[0m" : "\033[31m No\033[0m";
	return
	(
		out << "Form\t\t: "<< b.getName() << std::endl
			<< "Sign grade\t: " << b.getsignGrade() << std::endl
			<< "Execution grade\t: " << b.getExecGrade() << std::endl
			<< "Signed\t\t:" << isSigned << std::endl
	);
}
