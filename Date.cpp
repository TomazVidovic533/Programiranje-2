//
// Created by tomic on 22. 03. 2020.
//
#include <string>
#include "Date.h"

std::string Date::toString() const {

    return "Day: "+std::to_string(this->day)+
           " Month: "+std::to_string(this->month)+
           " Year: "+std::to_string(this->year);

}

void Date::setYear(int year) {
    this->year = year;
}

int Date::getYear() const {
    return year;
}

void Date::setMonth(int month) {
    this->month = month;
}

int Date::getMonth() const {
    return month;
}

void Date::setDay(int day) {
    this->day = day;
}

int Date::getDay() const {
    return day;
}

Date::Date() {}

Date::Date(int day, int month, int year) : day(day), month(month), year(year) {}

bool Date::isEqual(const Date &second) {

    return (this->day == second.day && this->month == second.month && this->year == second.year);

}

bool Date::isAfter(const Date &second) const {
    bool areTheyTheSame;
    if(this->year > second.year){
        areTheyTheSame=true;

    }else if( this->year==second.year  && this->month > second.month ){
        areTheyTheSame=true;

    }else if( this->year == second.year && this->month==second.month && this->day > second.day){
        areTheyTheSame=true;
    }else{
        areTheyTheSame=false;}

    return areTheyTheSame;
}

bool Date::isBefore(const Date &second) const {
    bool areTheyTheSame;
    if(this->year < second.year){
        areTheyTheSame=true;
    }else if(this->month < second.month){
        areTheyTheSame=true;
    }else if(this->day < second.day){
        areTheyTheSame=true;
    }else{
        areTheyTheSame=false;}
    return areTheyTheSame;
}