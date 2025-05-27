// ╔══════════════════════════════════════════════════════════════════════════════════════════════╗
// ║ Author:                Clément Colin                                                         ║
// ║ Create Time:           2025-05-17 10:51:42                        |\      _,,,---,,_         ║
// ║ Modified by:           Clément Colin                        ZZZzz /,`.-'`'    -.  ;-;;,_     ║
// ║ Modified time:         2025-05-27 12:35:55                       |,4-  ) )-,_. ,\ (  `'-'    ║
// ║ Description:                                                    '---''(_/--'  `-'\_)         ║
// ╚══════════════════════════════════════════════════════════════════════════════════════════════╝

#include "Bureaucrat.hpp"
#include "Intern.hpp"

#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define CYAN    "\033[36m"
#define RESET   "\033[0m"

int main(void)
{
	Intern someRandomIntern;

	std::cout << CYAN << "\n--- Intern Form Creation Tests ---\n" << RESET;

	std::cout << GREEN << "\n[EXPECTED SUCCESS] Shrubbery Creation Form\n" << RESET;
	AForm *shrub = someRandomIntern.makeForm("shrubbery creation", "Home");
	std::cout << *shrub << std::endl;

	std::cout << GREEN << "[EXPECTED SUCCESS] Robotomy RequestForm\n" << RESET;
	AForm *robo = someRandomIntern.makeForm("robotomy request", "Bender");
	std::cout << *robo << std::endl;

	std::cout << GREEN << "[EXPECTED SUCCESS] Presidential PardonForm\n" << RESET;
	AForm *pardon = someRandomIntern.makeForm("presidential pardon", "Turkey");
	std::cout << *pardon << std::endl;

	std::cout << RED   << "[EXPECTED FAIL] Invalid form\n" << RESET;
	AForm *fail = someRandomIntern.makeForm("moon mission", "Neil");
	std::cout << std::endl;
	(void)fail;

	delete shrub;
	delete robo;
	delete pardon;

	return 0;
}
