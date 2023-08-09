/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymehlil <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 15:37:04 by ymehlil           #+#    #+#             */
/*   Updated: 2023/08/09 15:37:19 by ymehlil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP
# include "AMateria.hpp"

class Ice: public AMateria {
	public:
		Ice();
		virtual ~Ice();
		Ice(Ice const & src);
		Ice & operator=(Ice const & src);

		virtual AMateria* clone() const;
		virtual void use(ICharacter& target);
};

#endif
