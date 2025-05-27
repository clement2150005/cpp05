#include "PresidentialPardonForm.hpp"

//-----------------------------------------------------------------------------------------------//
//                                     CONSTRUCTORS / DESTRUCTOR                                 //
//-----------------------------------------------------------------------------------------------//

PresidentialPardonForm::PresidentialPardonForm(const std::string &target)
	: AForm("Presidential Pardon " + target, 25, 5) ,_target(target) {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other)
	: AForm(other), _target(other._target) {}

PresidentialPardonForm::~PresidentialPardonForm() {}

//-----------------------------------------------------------------------------------------------//
//                                             GETTERS                                           //
//-----------------------------------------------------------------------------------------------//

std::string PresidentialPardonForm::getTarget() { return (_target); }

//-----------------------------------------------------------------------------------------------//
//                                             METHODS                                           //
//-----------------------------------------------------------------------------------------------//

void	PresidentialPardonForm::executeAction() const
{
	std::cout << _target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}
