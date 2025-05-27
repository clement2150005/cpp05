// ╔══════════════════════════════════════════════════════════════════════════════════════════════╗
// ║ Author:                Clément Colin                                                         ║
// ║ Create Time:           2025-05-17 10:51:42                        |\      _,,,---,,_         ║
// ║ Modified by:           Clément Colin                        ZZZzz /,`.-'`'    -.  ;-;;,_     ║
// ║ Modified time:         2025-05-26 11:37:26                       |,4-  ) )-,_. ,\ (  `'-'    ║
// ║ Description:                                                    '---''(_/--'  `-'\_)         ║
// ╚══════════════════════════════════════════════════════════════════════════════════════════════╝

#pragma once
#include <exception>

class GradeTooHighException : public std::exception {
public:
	const char* what() const throw() { return "Grade too high"; }
};

class GradeTooLowException : public std::exception {
public:
	const char* what() const throw() { return "Grade too low"; }
};

class FormNotSignedException : public std::exception {
public:
	const char* what() const throw() { return "Form not signed"; }
};