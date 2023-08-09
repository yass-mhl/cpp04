/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymehlil <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 15:23:16 by ymehlil           #+#    #+#             */
/*   Updated: 2023/08/09 15:23:47 by ymehlil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP
# include "AMateria.hpp"

class Cure: public AMateria {
	public:
		Cure();
		virtual ~Cure();
		Cure(Cure const & src);
		Cure & operator=(Cure const & src);

		virtual AMateria* clone() const;
		virtual void use(ICharacter& target);
};

#endif
