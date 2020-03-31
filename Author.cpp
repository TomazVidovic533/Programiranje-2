#include "Author.h"
#include <iostream>


Author::Author() {}

Author::Author(const std::string &name, const std::string &email, char gender) : name(name), email(email),
                                                                                 gender(gender) {}

std::string Author::toString() const {
    return "Author-> Name: "+this->name+" Email: "+this->email+" Gender: "+this->gender;

}

const std::string &Author::getName() const {
    return name;
}

void Author::setName(const std::string &name) {
    Author::name = name;
}

const std::string &Author::getEmail() const {
    return email;
}

void Author::setEmail(const std::string &email) {
    Author::email = email;
}

char Author::getGender() const {
    return gender;
}

void Author::setGender(char gender) {
    Author::gender = gender;
}

Author::~Author() {
    // std::cout<<"Author "<<this->name<<" has been killled."<<std::endl;
}
//
// Created by tomic on 22. 03. 2020.
//

