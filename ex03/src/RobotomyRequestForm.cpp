#include "RobotomyRequestForm.hpp"
#include <cstdlib>
#include <ctime>

//-----------------------------------------------------------------------------------------------//
//                                     CONSTRUCTORS / DESTRUCTOR                                 //
//-----------------------------------------------------------------------------------------------//

RobotomyRequestForm::RobotomyRequestForm(const std::string &target)
	: AForm("Robotomy Request " + target, 72, 45) ,_target(target) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other)
	: AForm(other), _target(other._target) {}

RobotomyRequestForm::~RobotomyRequestForm() {}

//-----------------------------------------------------------------------------------------------//
//                                             GETTERS                                           //
//-----------------------------------------------------------------------------------------------//

std::string RobotomyRequestForm::getTarget() { return (_target); }

//-----------------------------------------------------------------------------------------------//
//                                             METHODS                                           //
//-----------------------------------------------------------------------------------------------//

void	RobotomyRequestForm::executeAction() const
{
	std::cout << "BZZZZZZZZZZZZZTTTTTTT!!!\n";
	std::cout << "* KLANK * KRRRRRZZZZ * WHIRRRR *" << std::endl;
	std::cout << _target;
	std::srand(std::time(0));
	if (std::rand() % 2)
		std::cout << " has been robotomized" << std::endl;
	else
		std::cout << "'s robotomization has failed" << std::endl;
}
