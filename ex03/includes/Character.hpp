/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymehlil <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 16:13:44 by ymehlil           #+#    #+#             */
/*   Updated: 2023/08/09 16:14:25 by ymehlil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP
# include "ICharacter.hpp"
# include "AMateria.hpp"

class Character: public ICharacter {
	public:
		Character();
		Character(std::string const & name);
		virtual ~Character();
		Character(Character const & src);
		Character & operator=(Character const & src);

		virtual std::string const & getName() const;
		virtual void equip(AMateria* m);
		virtual void unequip(int idx);
		virtual void use(int idx, ICharacter& target);

	private:
		static const int _maxMateria = 4;
		AMateria* _inventory[_maxMateria];
		std::string _name;
		int _nbMateria;
};

#endif
