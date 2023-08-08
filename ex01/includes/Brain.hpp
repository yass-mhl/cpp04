/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymehlil <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 16:53:56 by ymehlil           #+#    #+#             */
/*   Updated: 2023/08/08 18:16:10 by ymehlil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>
# include "colors.hpp"

class Brain {
	public:
		Brain();
		Brain(const Brain& src);
		~Brain();
		Brain& operator=(const Brain& rhs);

		std::string getIdea(int index) const;
		void setIdea(int i, std::string idea);

	private:
		std::string ideas[100];
};

#endif
