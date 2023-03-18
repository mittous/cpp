/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imittous <imittous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 23:40:47 by imittous          #+#    #+#             */
/*   Updated: 2023/03/15 23:12:14 by imittous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
    (void)ac;
    if (!av[1])
    {
        std::cout<<"* LOUD AND UNBEARABLE FEEDBACK NOISE *";
        return (1);
    }
    for (int i = 1; av[i]; i++)
    {
        for (int j = 0; av[i][j]; j++)
        {
            if (isalpha(av[i][j]))
                std::cout<<(char)toupper(av[i][j]);
            else
                std::cout<<(av[i][j]);
            
        }
    }
    std::cout<<"\n";
}