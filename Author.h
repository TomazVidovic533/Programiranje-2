//
// Created by tomic on 31. 03. 2020.
//

#ifndef NALOGA0502_AUTHOR_H
#define NALOGA0502_AUTHOR_H


#include <string>
class Author{
private:
    std::string name;
    std::string email;
    char gender;
public:
    Author();

    virtual ~Author();

    Author(const std::string &name, const std::string &email, char gender);

    const std::string &getName() const;

    void setName(const std::string &name);

    const std::string &getEmail() const;

    void setEmail(const std::string &email);

    char getGender() const;

    void setGender(char gender);

    std::string toString() const;

};



#endif //NALOGA0502_AUTHOR_H
