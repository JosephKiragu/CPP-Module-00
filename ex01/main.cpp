#include <iostream>
#include <iomanip>
#include "PhoneBook.h"
#include "Contact.h"

void addContact(PhoneBook &phone_book) {
    std::string input;
    Contact new_contact;

    std::cout << "First Name: ";
    std::getline(std::cin, input);
    new_contact.setFirstName(input);

    std::cout << "Last Name: ";
    std::getline(std::cin, input);
    new_contact.setLastName(input);

    std::cout << "Nickname: ";
    std::getline(std::cin, input);
    new_contact.setNickname(input);

    std::cout << "Phone Number: ";
    std::getline(std::cin, input);
    new_contact.setPhoneNumber(input);

    std::cout << "Darkest Secret: ";
    std::getline(std::cin, input);
    new_contact.setDarkestSecret(input);

    phone_book.addContact(new_contact);
}

void displayContactList(const PhoneBook &phone_book) {
    std::cout << std::setw(10) << "Index" << "|";
    std::cout << std::setw(10) << "First Name" << "|";
    std::cout << std::setw(10) << "Last Name" << "|";
    std::cout << std::setw(10) << "Nickname" << std::endl;

    for (int i = 0; i < phone_book.getContactCount(); ++i) {
        const Contact *contact = phone_book.getContact(i);
        std::cout << std::setw(10) << i << "|";
        std::cout << std::setw(10) << contact->getFirstName() << "|";
        std::cout << std::setw(10) << contact->getLastName() << "|";
        std::cout << std::setw(10) << contact->getNickname() << std::endl;
    }
}

void searchContact(const PhoneBook &phone_book) {
    displayContactList(phone_book);
    int index;
    std::cout << "Enter the index of the contact to display: ";
    std::cin >> index;
    std::cin.ignore();

    const Contact *contact = phone_book.getContact(index);
    if (contact == nullptr) {
        std::cout << "Invalid index." << std::endl;
        return;
    }

    std::cout << "First Name: " << contact->getFirstName() << std::endl;
    std::cout << "Last Name: " << contact->getLastName() << std::endl;
    std::cout << "Nickname: " << contact->getNickname() << std::endl;
    std::cout << "Phone Number: " << contact->getPhoneNumber() << std::endl;
    std::cout << "Darkest Secret: " << contact->getDarkestSecret() << std::endl;
}

int main() {
    PhoneBook phone_book;
    std::string command;

    while (true) {
        std::cout << "Enter a command (ADD, SEARCH, EXIT): ";
        std::getline(std::cin, command);

        if (command == "ADD") {
            addContact(phone_book);
        } else if (command == "SEARCH") {
            searchContact(phone_book);
        } else if (command == "EXIT") {
            break;
        } else {
            std::cout << "Invalid command. Please try again." << std::endl;
        }
    }

    return 0;
}
