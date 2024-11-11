/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abekri <abekri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 18:55:00 by abekri            #+#    #+#             */
/*   Updated: 2024/11/06 17:52:45 by abekri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char **argv)
{
    if(argc==1)
    {
        std :: cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std :: endl;
        return 0;
    }
    else
    {
        for(int i=1; i<argc; i++)
        {
            for(int j=0; argv[i][j]; j++)
               std :: cout << (char)toupper(argv[i][j]);
        }
        std ::cout << std :: endl;
    }
    return 0;
}
