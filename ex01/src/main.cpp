/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccolin <ccolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 10:10:01 by ccolin            #+#    #+#             */
/*   Updated: 2025/04/12 15:35:15 by ccolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"

int main(void)
{
    try
    {
        Bureaucrat markScout("Mark Scout", 1);
        while (1)
        {
            std::cout << markScout;
            markScout.decrementGrade();
        }
    } catch (const std::exception &e)
    {
        std::cout << "Caught: " << e.what() << std::endl;
    }
    return (0);
}