/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcella-d <dcella-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 16:25:17 by dcella-d          #+#    #+#             */
/*   Updated: 2023/06/16 20:10:09 by dcella-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class Contact
{
	public:
		Contact()
		{
			nbr = 0;
		}
		
		Contact(std::string name, std::string lastname, std::string nickname, int number, std::string darkest_secret)
		{
			str1 = name;
			str2 = lastname;
			str3 = nickname;
			str4 = darkest_secret;
			nbr = number;
		}

		std::string	str1;
		std::string	str2;
		std::string	str3;
		std::string	str4;
		int			nbr;

	// private:
};
