//
// Created by tomic on 31. 03. 2020.
//

#ifndef NALOGA0502_DATE_H
#define NALOGA0502_DATE_H



class Date{
private:
    int day;
    int month;
    int year;
public:
    Date(int day, int month, int year);
    Date();

    int getDay() const;

    void setDay(int day);

    int getMonth() const;

    void setMonth(int month);

    int getYear() const;

    void setYear(int year);

    std::string toString() const;
    bool isEqual(const Date &second);
    bool isAfter(const Date &second) const;
    bool isBefore(const Date &second) const;


};


#endif //NALOGA0502_DATE_H
