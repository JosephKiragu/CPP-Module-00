/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josephkiragu <josephkiragu@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 18:59:46 by josephkirag       #+#    #+#             */
/*   Updated: 2023/06/16 19:01:13 by josephkirag      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "Contact.h"

Contact::Contact() {}

void Contact::setFirstName(const std::string &first_name) {
    this->first_name = first_name;
}

void Contact::setLastName(const std::string &last_name) {
    this->last_name = last_name;
}

void Contact::setNickname(const std::string &nickname) {
    this->nickname = nickname;
}

void Contact::setPhoneNumber(const std::string &phone_number) {
    this->phone_number = phone_number;
}

void Contact::setDarkestSecret(const std::string &darkest_secret) {
    this->darkest_secret = darkest_secret;
}

std::string Contact::getFirstName() const {
    return first_name;
}

std::string Contact::getLastName() const {
    return last_name;
}

std::string Contact::getNickname() const {
    return nickname;
}

std::string Contact::getPhoneNumber() const {
    return phone_number;
}

std::string Contact::getDarkestSecret() const {
    return darkest_secret;
}
