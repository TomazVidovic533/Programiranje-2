//
// Created by tomic on 31. 03. 2020.
//

#ifndef NALOGA0502_PUBLISHINGHOUSE_H
#define NALOGA0502_PUBLISHINGHOUSE_H

#include <string>


class PublishingHouse{
private:
    std::string name;
    std::string address;
    std::string region;
    int phoneNumber;
    int faxNumber;

public:
    PublishingHouse(const std::string &name, const std::string &address, const std::string &region, int phoneNumber,
                    int faxNumber);

    PublishingHouse();

    const std::string &getName() const;

    void setName(const std::string &name);

    const std::string &getAddress() const;

    void setAddress(const std::string &address);

    const std::string &getRegion() const;

    void setRegion(const std::string &region);

    int getPhoneNumber() const;

    void setPhoneNumber(int phoneNumber);

    int getFaxNumber() const;

    void setFaxNumber(int faxNumber);

    std::string toString() const;

    virtual ~PublishingHouse();
};


#endif //NALOGA0502_PUBLISHINGHOUSE_H
