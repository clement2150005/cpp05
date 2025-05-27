#include "ShrubberyCreationForm.hpp"
#include <fstream>

//-----------------------------------------------------------------------------------------------//
//                                     CONSTRUCTORS / DESTRUCTOR                                 //
//-----------------------------------------------------------------------------------------------//

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target)
	: AForm("Shrubbery Creation " + target, 145, 137) ,_target(target) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other)
	: AForm(other), _target(other._target) {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

//-----------------------------------------------------------------------------------------------//
//                                             GETTERS                                           //
//-----------------------------------------------------------------------------------------------//

std::string ShrubberyCreationForm::getTarget() { return (_target); }

//-----------------------------------------------------------------------------------------------//
//                                             METHODS                                           //
//-----------------------------------------------------------------------------------------------//

void	ShrubberyCreationForm::executeAction() const
{
	std::string filename = _target + "_shrubbery";
	std::ofstream file(filename.c_str());
	if (!file)
		throw std::runtime_error("Couldn't open the file");
	file << "          * *    \n"
	     << "         *    *  *\n"
	     << "    *  *    *     *  *\n"
	     << "   *     *    *  *    *\n"
	     << " * *   *    *    *    *   *\n"
	     << " *     *  *    * * .#  *   *\n"
	     << " *   *     * #.  .# *   *\n"
	     << "  *     \"#.  #: #\" * *    *\n"
	     << " *   * * \"#. ##\"       *\n"
	     << "   *       \"###\"\n"
	     << "             \"##\"\n"
	     << "              ##.\n"
	     << "              .##:\n"
	     << "              :###\n"
	     << "              ;###\n"
	     << "            ,####.\n"
	     << "/\\/\\/\\/\\/\\/.######.\\/\\/\\/\\/\\\n";
	file.close();
}
