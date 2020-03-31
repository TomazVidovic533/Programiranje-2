//
// Created by tomic on 31. 03. 2020.
//
#include "Publication.h"
#include "Newsletter.h"
#include <iostream>
Newsletter::Newsletter() {}

Newsletter::Newsletter(const std::string &title, const PublishingHouse &publisher, int pages, double price,
                       const Date &published, const std::string &mainTopic) : Publication(title, publisher, pages,
                                                                                          price, published),
                                                                              mainTopic(mainTopic) {}
/*
Newsletter::Newsletter(const Publication &other, const std::string &mainTopic) : Publication(other),
                                                                                 mainTopic(mainTopic) {}
*/

Newsletter::Newsletter(const Newsletter &other) : Publication(other.title,other.publisher,other.pages,other.price,other.published) , mainTopic(other.mainTopic) {

}

const std::string &Newsletter::getMainTopic() const {
    return mainTopic;
}

void Newsletter::setMainTopic(const std::string &mainTopic) {
    this->mainTopic = mainTopic;
}

void Newsletter::print() const{

    std::cout<<"NEWSLETTER: "<<std::endl;
    std::cout<<"Main topic -> "<<this->mainTopic<<std::endl;
    std::cout<<" Title -> "<<this->title<<std::endl;
    std::cout<<" Pages -> "<<this->pages<<std::endl;
    std::cout<<" Price -> "<<this->price<<std::endl;
    std::cout<<" Date -> "<<this->published.toString()<<std::endl;
    std::cout<<" Publisher -> "<<this->publisher.toString()<<std::endl;

}

std::string Newsletter::toString() const {

    return "Main topic -> "+this->mainTopic+" Title -> "+this->title+" Pages -> "+std::to_string(this->pages)+" Price -> "+std::to_string(this->price)+" Published -> "+this->published.toString()+" Publisher -> "+this->publisher.toString();
}