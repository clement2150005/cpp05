// ╔══════════════════════════════════════════════════════════════════════════════════════════════╗
// ║ Author:                Clément Colin                                                         ║
// ║ Create Time:           2025-05-15 09:45:19                        |\      _,,,---,,_         ║
// ║ Modified by:           Clément Colin                        ZZZzz /,`.-'`'    -.  ;-;;,_     ║
// ║ Modified time:         2025-05-17 11:57:33                       |,4-  ) )-,_. ,\ (  `'-'    ║
// ║ Description:                                                    '---''(_/--'  `-'\_)         ║
// ╚══════════════════════════════════════════════════════════════════════════════════════════════╝

#include "Bureaucrat.hpp"

int	main(void)
{
	// Valid Bureaucrat
	std::cout << std::endl << "Instantiating bureaucrat named John Smith of grade 75" << std::endl;
	Bureaucrat	a("John Smith", 75);
	std::cout << "→\t" << a << std::endl;

	// Copy test
	std::cout << std::endl << "Copying John Smith" << std::endl;
	Bureaucrat	a1(a);
	std::cout << "→\t" << a1 << std::endl;

	// Increment test
	std::cout << std::endl << "Incrementing John Smith's grade" << std::endl;
	a.incrementGrade();
	std::cout << "→\t" << a << std::endl;

	// Decrement test
	std::cout << std::endl << "Decrementing John Smith's grade" << std::endl;
	a.decrementGrade();
	std::cout << "→\t" << a << std::endl;

	// Minimum Grade Bureaucrat
	std::cout << std::endl << "Instantiating bureaucrat named Minimum Grade of grade 150" << std::endl;
	Bureaucrat	b("Minimum Grade", 150);
	std::cout << "→\t" << b << std::endl;

	// Maximum Grade Bureaucrat
	std::cout << std::endl << "Instantiating bureaucrat named Maximum Grade of grade 1" << std::endl;
	Bureaucrat	c("Maximum Grade", 1);
	std::cout << "→\t" << c << std::endl;

	// Decrement Minimum Grade Bureaucrat
	try
	{
		std::cout << std::endl << "Decrementing grade of Minimum Grade" << std::endl;
		b.decrementGrade();
	}
	catch (const std::exception &e)
	{
		std::cout << "→\t" << e.what() << std::endl << std::endl;
	}

	// Increment Maximum Grade Bureaucrat
	try
	{
		std::cout << std::endl << "Incrementing grade of Maximum Grade" << std::endl;
		c.incrementGrade();
	}
	catch (const std::exception &e)
	{
		std::cout << "→\t" << e.what() << std::endl << std::endl;
	}

	// Grade too high Bureaucrat
	std::cout << "Instantiating bureaucrat named Too High of grade 0" << std::endl;
	try 
	{
		Bureaucrat d("Too High", 0);
	} 
	catch (const std::exception &e) 
	{
		std::cout << "→\t" << e.what() << std::endl << std::endl;
	}

	// Grade too low Bureaucrat
	std::cout << "Instantiating bureaucrat named Too Low of grade 151" << std::endl;
	try 
	{
		Bureaucrat e("Too Low", 151);
	} 
	catch (const std::exception &e) 
	{
		std::cout << "→\t" << e.what() << std::endl << std::endl;
	}

	return (0);
}