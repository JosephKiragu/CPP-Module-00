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

