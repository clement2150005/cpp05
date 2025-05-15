/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccolin <ccolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 15:38:40 by ccolin            #+#    #+#             */
/*   Updated: 2025/04/12 15:42:52 by ccolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Form
{
private:
    const std::string   _name;
    bool                _isSigned;
    const int           _signGrade;
    const int           _executeGrade;

public:
    Form(/* args */);
    ~Form();

    class GradeTooHighException : public std::exception
    {
    public:
        const char *what() const throw();
    };

    class GradeTooLowException : public std::exception
    {
    public:
        const char *what() const throw();
    };
};

Form::Form(/* args */)
{
}

Form::~Form()
{
}
