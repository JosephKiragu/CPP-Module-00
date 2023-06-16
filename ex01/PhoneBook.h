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
