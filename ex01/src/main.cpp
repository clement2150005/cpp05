// ╔══════════════════════════════════════════════════════════════════════════════════════════════╗
// ║ Author:                Clément Colin                                                         ║
// ║ Create Time:           2025-05-17 10:51:42                        |\      _,,,---,,_         ║
// ║ Modified by:           Clément Colin                        ZZZzz /,`.-'`'    -.  ;-;;,_     ║
// ║ Modified time:         2025-05-24 08:39:24                       |,4-  ) )-,_. ,\ (  `'-'    ║
// ║ Description:                                                    '---''(_/--'  `-'\_)         ║
// ╚══════════════════════════════════════════════════════════════════════════════════════════════╝

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
	std::cout << "\nInstantiating form 'IllegalSignGrade' with sign grade 0 and exec grade 75 (sign grade too high)\n";
	try
	{
		Form badForm1("IllegalSignGrade", 0, 75);
		std::cout << "→\t" << badForm1 << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "→\tFailed to instantiate form: " << e.what() << std::endl;
	}

	std::cout << "\nInstantiating form 'IllegalExecGrade' with sign grade 75 and exec grade 151 (exec grade too low)\n";
	try
	{
		Form badForm2("IllegalExecGrade", 75, 151);
		std::cout << "→\t" << badForm2 << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "→\tFailed to instantiate form: " << e.what() << std::endl;
	}

	std::cout << "\nInstantiating form 'StandardForm' with sign grade 50 and exec grade 25 (valid)\n";
	try
	{
		Form form("StandardForm", 50, 25);
		std::cout << "→\t" << form << std::endl;

		std::cout << "\nInstantiating bureaucrat 'Bob' with grade 100 (cannot sign)\n";
		Bureaucrat bob("Bob", 100);
		std::cout << "→\t" << bob << std::endl;

		std::cout << "\nAttempt from Bob to sign StandardForm\n";
		std::cout << "→\t";
		bob.signForm(form);
		std::cout << form << std::endl;

		std::cout << "\nInstantiating bureaucrat 'Alice' with grade 30 (can sign)\n";
		Bureaucrat alice("Alice", 30);
		std::cout << "→\t" << alice << std::endl;

		std::cout << "\nAttempt from Alice to sign StandardForm\n";
		std::cout << "→\t";
		alice.signForm(form);
		std::cout << form << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "→\tException: " << e.what() << std::endl;
	}

	return 0;
}
