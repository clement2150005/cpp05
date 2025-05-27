// ╔══════════════════════════════════════════════════════════════════════════════════════════════╗
// ║ Author:                Clément Colin                                                         ║
// ║ Create Time:           2025-05-27 10:46:15                        |\      _,,,---,,_         ║
// ║ Modified by:           Clément Colin                        ZZZzz /,`.-'`'    -.  ;-;;,_     ║
// ║ Modified time:         2025-05-27 12:28:24                       |,4-  ) )-,_. ,\ (  `'-'    ║
// ║ Description:                                                    '---''(_/--'  `-'\_)         ║
// ╚══════════════════════════════════════════════════════════════════════════════════════════════╝

#include "Intern.hpp"

//-----------------------------------------------------------------------------------------------//
//                                     CONSTRUCTORS / DESTRUCTOR                                 //
//-----------------------------------------------------------------------------------------------//

Intern::Intern() {}
Intern::Intern(const Intern &other) { (void)other; }
Intern &Intern::operator=(const Intern &other) { (void)other; return (*this); }
Intern::~Intern() {}

//-----------------------------------------------------------------------------------------------//
//                                             METHODS                                           //
//-----------------------------------------------------------------------------------------------//

static AForm *makeShrubbery(std::string const &target) { return new ShrubberyCreationForm(target); }
static AForm *makeRobotomy(std::string const &target) { return new RobotomyRequestForm(target); }
static AForm *makePardon(std::string const &target) { return new PresidentialPardonForm(target); }

AForm *Intern::makeForm(std::string name, std::string target)
{
    formFactory formFactory[3] = 
    {
		{"shrubbery creation", makeShrubbery},
		{"robotomy request", makeRobotomy},
		{"presidential pardon", makePardon} 
    };
    for (int i = 0; i < 3; i++)
    {
        if (formFactory[i].name == name)
        {
            std::cout << "Intern creates " << name << std::endl;
            return (formFactory[i].func(target));
        }
    }
    std::cout << "Intern couldn't find the form " << name << std::endl;
    return (0);
}
