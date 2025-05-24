// ╔══════════════════════════════════════════════════════════════════════════════════════════════╗
// ║ Author:                Clément Colin                                                         ║
// ║ Create Time:           2025-05-17 10:54:11                        |\      _,,,---,,_         ║
// ║ Modified by:           Clément Colin                        ZZZzz /,`.-'`'    -.  ;-;;,_     ║
// ║ Modified time:         2025-05-24 08:26:54                       |,4-  ) )-,_. ,\ (  `'-'    ║
// ║ Description:                                                    '---''(_/--'  `-'\_)         ║
// ╚══════════════════════════════════════════════════════════════════════════════════════════════╝

#include "AForm.hpp"
#include "CheckGrade.hpp"
#include "Bureaucrat.hpp"

//-----------------------------------------------------------------------------------------------//
//                                     CONSTRUCTORS / DESTRUCTOR                                 //
//-----------------------------------------------------------------------------------------------//

AForm::AForm() : _name("untitledAForm"), _signed(false), _signGrade(75), _execGrade(75)
{
	checkGrade(_signGrade);
	checkGrade(_execGrade);
}

AForm::AForm(std::string name, int signGrade, int execGrade) :
	_name(name),
	_signed(false),
	_signGrade(signGrade),
	_execGrade(execGrade)
{
	checkGrade(_signGrade);
	checkGrade(_execGrade);
}

AForm::AForm(const AForm &other) :
	_name(other._name),
	_signed(other._signed),
	_signGrade(other._signGrade),
	_execGrade(other._execGrade)
{
	checkGrade(_signGrade);
	checkGrade(_execGrade);
}

AForm::~AForm() {}

//-----------------------------------------------------------------------------------------------//
//                                             GETTERS                                           //
//-----------------------------------------------------------------------------------------------//

const std::string	AForm::getName() const {return _name ;}
bool				AForm::getSigned() const {return _signed ;}
int					AForm::getsignGrade() const {return _signGrade ;}
int					AForm::getExecGrade() const {return _execGrade ;}

//-----------------------------------------------------------------------------------------------//
//                                       	   METHODS                                           //
//-----------------------------------------------------------------------------------------------//

void				AForm::beSigned(Bureaucrat &bureaucrat) 
{
	checkSign(bureaucrat.getGrade(), _signGrade);
	_signed = true;
}

//-----------------------------------------------------------------------------------------------//
//                                       NON MEMBER FUNCTIONS                                    //
//-----------------------------------------------------------------------------------------------//

std::ostream &operator<<(std::ostream &out, const AForm &b)
{
	std::string isSigned = b.getSigned() ? "\033[32m Yes\033[0m" : "\033[31m No\033[0m";
	return
	(
		out << "AForm\t\t: "<< b.getName() << std::endl
			<< "Sign grade\t: " << b.getsignGrade() << std::endl
			<< "Execution grade\t: " << b.getExecGrade() << std::endl
			<< "Signed\t\t:" << isSigned << std::endl
	);
}
