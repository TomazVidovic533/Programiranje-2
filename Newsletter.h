//
// Created by tomic on 31. 03. 2020.
//

#ifndef NALOGA0502_NEWSLETTER_H
#define NALOGA0502_NEWSLETTER_H

#include "Publication.h"
#include <string>
class Newsletter : public Publication{
private:
    std::string mainTopic;
public:
    Newsletter();

    Newsletter(const std::string &title, const PublishingHouse &publisher, int pages, double price,
               const Date &published, const std::string &mainTopic);

   // Newsletter(const Publication &other, const std::string &mainTopic);

    Newsletter(const Newsletter &newsletter);
    const std::string &getMainTopic() const;

    void setMainTopic(const std::string &mainTopic);

   std::string toString() const;

   void print() const;

};


#endif //NALOGA0502_NEWSLETTER_H
