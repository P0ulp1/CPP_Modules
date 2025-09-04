/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phautena <phautena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 17:15:38 by phautena          #+#    #+#             */
/*   Updated: 2025/09/04 13:46:12 by phautena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Base.hpp"
#include "../includes/ABC.hpp"

int	main(void)
{
	Base*	p = generate();
	Base&	r = *p;

	identify(p);
	identify(r);

	delete p;

	return (42);
}
