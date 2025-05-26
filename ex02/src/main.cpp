// ╔══════════════════════════════════════════════════════════════════════════════════════════════╗
// ║ Author:                Clément Colin                                                         ║
// ║ Create Time:           2025-05-17 10:51:42                        |\      _,,,---,,_         ║
// ║ Modified by:           Clément Colin                        ZZZzz /,`.-'`'    -.  ;-;;,_     ║
// ║ Modified time:         2025-05-26 15:34:30                       |,4-  ) )-,_. ,\ (  `'-'    ║
// ║ Description:                                                    '---''(_/--'  `-'\_)         ║
// ╚══════════════════════════════════════════════════════════════════════════════════════════════╝

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"

#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define CYAN    "\033[36m"
#define RESET   "\033[0m"

int main(void)
{
	Bureaucrat low("Octave", 150);
	Bureaucrat mid("Philomène", 100);
	Bureaucrat high("Hyppolite", 1);

	ShrubberyCreationForm shrub("Home");
	RobotomyRequestForm robo("Bender");
	PresidentialPardonForm pardon("Turkey");

	std::cout << CYAN << "\n--- ShrubberyCreationForm Tests ---\n" << RESET;

	std::cout << RED << "\n[EXPECTED FAIL] Octave tries to sign Shrubbery (needs 145, has 150)\n" << RESET;
	low.signForm(shrub);

	std::cout << GREEN << "\n[EXPECTED SUCCESS] Philomène signs Shrubbery (has 100)\n" << RESET;
	mid.signForm(shrub);

	std::cout << RED << "\n[EXPECTED FAIL] Octave tries to execute Shrubbery (needs 137, has 150)\n" << RESET;
	low.executeForm(shrub);

	std::cout << GREEN << "\n[EXPECTED SUCCESS] Philomène executes Shrubbery (has 100)\n" << RESET;
	mid.executeForm(shrub);

	std::cout << CYAN << "\n--- RobotomyRequestForm Tests ---\n" << RESET;

	std::cout << RED << "\n[EXPECTED FAIL] Octave tries to sign Robotomy (needs 72, has 150)\n" << RESET;
	low.signForm(robo);

	std::cout << GREEN << "\n[EXPECTED SUCCESS] Hyppolite signs Robotomy (has 1)\n" << RESET;
	high.signForm(robo);

	std::cout << RED << "\n[EXPECTED FAIL] Philomène tries to execute Robotomy (needs 45, has 100)\n" << RESET;
	mid.executeForm(robo);

	std::cout << GREEN << "\n[EXPECTED SUCCESS] Hyppolite executes Robotomy (has 1)\n" << RESET;
	high.executeForm(robo);

	std::cout << CYAN << "\n--- PresidentialPardonForm Tests ---\n" << RESET;

	std::cout << RED << "\n[EXPECTED FAIL] Philomène tries to sign Pardon (needs 25, has 100)\n" << RESET;
	mid.signForm(pardon);

	std::cout << GREEN << "\n[EXPECTED SUCCESS] Hyppolite signs Pardon (has 1)\n" << RESET;
	high.signForm(pardon);

	std::cout << RED << "\n[EXPECTED FAIL] Philomène tries to execute Pardon (needs 5, has 100)\n" << RESET;
	mid.executeForm(pardon);

	std::cout << GREEN << "\n[EXPECTED SUCCESS] Hyppolite executes Pardon (has 1)\n" << RESET;
	high.executeForm(pardon);

	return 0;
}

