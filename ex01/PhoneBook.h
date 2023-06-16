/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josephkiragu <josephkiragu@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 18:59:46 by josephkirag       #+#    #+#             */
/*   Updated: 2023/06/16 19:01:49 by josephkirag      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include "Contact.h"

class PhoneBook {
private:
    static const int MAX_CONTACTS = 8;
    Contact contacts[MAX_CONTACTS];
    int contact_count;

public:
    PhoneBook();
    bool addContact(const Contact &contact);
    const Contact *getContact(int index) const;
    int getContactCount() const;
};

#endif // PHONEBOOK_H
