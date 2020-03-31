//
// Created by tomic on 31. 03. 2020.
//

#ifndef NALOGA0502_PUBLICATION_H
#define NALOGA0502_PUBLICATION_H

#include "PublishingHouse.h"
#include <string>
#include "Date.h"

class Publication {
protected:

    std::string title;
    PublishingHouse publisher;
    int pages;
    double price;
    Date published;
public:
    Publication(const std::string &title, const PublishingHouse &publisher, int pages, double price,
                const Date &published);

    Publication(const Publication &other);

    Publication();

    virtual void print() const;

    virtual std::string toString() const;

    const std::string &getTitle() const;

    void setTitle(const std::string &title);

    const PublishingHouse &getPublisher() const;

    void setPublisher(const PublishingHouse &publisher);

    int getPages() const;

    void setPages(int pages);

    double getPrice() const;

    void setPrice(double price);

    const Date &getPublished() const;

    void setPublished(const Date &published);


};


#endif //NALOGA0502_PUBLICATION_H
