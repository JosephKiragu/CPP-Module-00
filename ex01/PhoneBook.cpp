/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josephkiragu <josephkiragu@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 18:59:46 by josephkirag       #+#    #+#             */
/*   Updated: 2023/06/16 19:01:40 by josephkirag      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.h"

PhoneBook::PhoneBook() : contact_count(0) {}

bool PhoneBook::addContact(const Contact &contact) {
    if (contact_count < MAX_CONTACTS) {
        contacts[contact_count] = contact;
        contact_count++;
        return true;
    } else {
        for (int i = 0; i < MAX_CONTACTS - 1; ++i) {
            contacts[i] = contacts[i + 1];
        }
        contacts[MAX_CONTACTS - 1] = contact;
        return false;
    }
}

const Contact *PhoneBook::getContact(int index) const {
    if (index >= 0 && index < contact_count) {
        return &contacts[index];
    }
    return nullptr;
}



int PhoneBook::getContactCount() const {
    return contact_count;
}

