//
// Created by tomic on 31. 03. 2020.
//
#include <iostream>
#include <string>
#include "PublishingHouse.h"
#include "Date.h"
#include "Publication.h"

Publication::Publication(const std::string &title, const PublishingHouse &publisher, int pages,
                         double price, const Date &published) : title(title), publisher(publisher), pages(pages),
                                                                price(price), published(published) {}

Publication::Publication() {}

Publication::Publication(const Publication& other):
title(other.title), publisher(other.publisher), pages(other.pages), price(other.price), published(other.published) {
}

const std::string &Publication::getTitle() const {
    return title;
}

void Publication::setTitle(const std::string &title) {
    Publication::title = title;
}

const PublishingHouse &Publication::getPublisher() const {
    return publisher;
}

void Publication::setPublisher(const PublishingHouse &publisher) {
    Publication::publisher = publisher;
}

int Publication::getPages() const {
    return pages;
}

void Publication::setPages(int pages) {
    Publication::pages = pages;
}

double Publication::getPrice() const {
    return price;
}

void Publication::setPrice(double price) {
    Publication::price = price;
}

const Date &Publication::getPublished() const {
    return published;
}

void Publication::setPublished(const Date &published) {
    Publication::published = published;
}

void Publication::print() const {

    std::cout<<"PUBLICATION: "<<std::endl;
    std::cout<<"Title -> "<<this->title<<std::endl;
    std::cout<<"Publisher ->: "<<this->publisher.toString()<<std::endl;
    std::cout<<"Pages -> "<<this->pages<<std::endl;
    std::cout<<"Price ->"<<this->price<<std::endl;
    std::cout<<"Date -> "<<this->published.toString()<<std::endl;

}

std::string Publication::toString() const {

    return "Title -> "+this->title+" Publishing house -> "+this->publisher.toString()+" Pages -> "+std::to_string(this->pages)+" Price -> "+std::to_string(this->price)+"  Date -> "+this->published.toString();

}