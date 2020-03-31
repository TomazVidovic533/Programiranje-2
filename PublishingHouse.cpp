//
// Created by tomic on 22. 03. 2020.
//

//
// Created by tomic on 22. 03. 2020.
//
#include <iostream>
#include <bits/basic_string.h>
#include "PublishingHouse.h"

PublishingHouse::PublishingHouse(const std::__cxx11::basic_string<char> &name,
                                 const std::__cxx11::basic_string<char> &address,
                                 const std::__cxx11::basic_string<char> &region, int phoneNumber, int faxNumber) : name(
        name), address(address), region(region), phoneNumber(phoneNumber), faxNumber(faxNumber) {}

PublishingHouse::PublishingHouse() {}

const std::string &PublishingHouse::getName() const {
    return name;
}

void PublishingHouse::setName(const std::string &name) {
    this->name = name;
}

const std::string &PublishingHouse::getAddress() const {
    return address;
}

void PublishingHouse::setAddress(const std::string &address) {
    this->address = address;
}

const std::string &PublishingHouse::getRegion() const {
    return region;
}

void PublishingHouse::setRegion(const std::string &region) {
    this->region = region;
}

int PublishingHouse::getPhoneNumber() const {
    return phoneNumber;
}

void PublishingHouse::setPhoneNumber(int phoneNumber) {
    this->phoneNumber = phoneNumber;
}

int PublishingHouse::getFaxNumber() const {
    return faxNumber;
}

void PublishingHouse::setFaxNumber(int faxNumber) {
    this->faxNumber = faxNumber;
}

PublishingHouse::~PublishingHouse() {
    //  std::cout<<"Publishing house "<<this->name<<" has been destroyed."<<std::endl;
}

std::string PublishingHouse::toString() const {

    return " Name -> "+this->name+" Address -> "+this->address+" Fax number -> "+std::to_string(this->faxNumber)+" Phone number -> "+std::to_string(this->phoneNumber)+" Region ->"+this->region;

}