/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccolin <ccolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 10:10:04 by ccolin            #+#    #+#             */
/*   Updated: 2025/04/12 13:13:14 by ccolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

//---------------------------------------------------------------------------//
//                                    PUBLIC                                 //
//---------------------------------------------------------------------------//

void Bureaucrat::checkGrade(int grade)
{
    if (grade < 1)
        throw GradeTooHighException();
    if (grade > 150)
        throw GradeTooLowException();
}

//---------------------------------------------------------------------------//
//                                    PRIVATE                                //
//---------------------------------------------------------------------------//

// ------------------------CONSTRUCTORS / DESTRUCTOR------------------------ //

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade)
{
    checkGrade(_grade);
}

Bureaucrat::Bureaucrat(const Bureaucrat &other) : _name(other._name), _grade(other._grade)
{
    checkGrade(_grade);
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other)
{
    checkGrade(_grade);
    if (this != &other)
        _grade = other._grade;
    return *this;
}

Bureaucrat::~Bureaucrat() {}

// ---------------------------------METHODS--------------------------------- //

std::string Bureaucrat::getName() const
{
    return (this->_name);
}

int Bureaucrat::getGrade() const
{
    return (this->_grade);
}


//---------------------------------------------------------------------------//
//                                 EXCEPTIONS                                //
//---------------------------------------------------------------------------//

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Grade too high!";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Grade too low!";
}

void    Bureaucrat::incrementGrade()
{
    _grade--;
    checkGrade(_grade);
}

void    Bureaucrat::decrementGrade()
{
    _grade++;
    checkGrade(_grade);
}

//---------------------------------------------------------------------------//
//                                NON MEMBERS                                //
//---------------------------------------------------------------------------//

std::ostream &operator<<(std::ostream &out, const Bureaucrat &b)
{
    out << b.getName() << ", bureaucrat grade " << b.getGrade() << std::endl;
    return (out);
}
