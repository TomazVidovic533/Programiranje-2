//
// Created by tomic on 22. 03. 2020.
//

//
// Created by tomic on 18. 03. 2020.
//

//
// Created by tomic on 6. 03. 2020.
//

#include <string>
#include "Book.h"
#include "Author.h"
#include <iostream>

int Book::idCounter = 10000;

Book::Book() : id(idCounter++) {

}

/*
Book::Book(const std::string &title, const PublishingHouse &publisher, double price, int pages,
           Author *author, const Date published) : Publication(title,publisher,pages,price,published),
                                                   id(idCounter++) {
    addAuthor(author);

}
*/
Book::Book(const Book &b) : Publication(b.title, b.publisher, b.pages, b.price, b.published),
                            authors(b.authors), id(idCounter++) {

}

Book::Book(const std::string &title, const PublishingHouse &publisher, double price, int pages, const Date published)
        : Publication(title, publisher, pages, price, published),
          id(idCounter++) {}

Book::~Book() {
    // std::cout << "Book " << this->title << " was destroyed!" << std::endl;
}

const std::string &Book::getTitle() const {
    return title;
}

int Book::getId() const {
    return id;
}

/*
void Book::setId(const int id) {
    this->id = id;
}
*/
void Book::print() const {
    std::cout << std::endl;
    std::cout << "BOOK: " << std::endl;
    std::cout << "Title -> " << this->title
              << " Publisher -> " << this->publisher.getName()
              << " Pages -> " << this->pages
              << " Price -> " << this->price
              << " Id -> " << this->id
              << std::endl;
    std::cout << " Authors -> ";
    if (this->authors.empty()) {
        std::cout << "Nima dodanih avtorjev.";
    } else {
        for (size_t i = 0; i < this->authors.size(); i++) {
            std::cout << this->authors[i]->toString();
        }
    }
    std::cout <<" Date -> "<< this->published.toString();
    std::cout << std::endl;

}

std::string Book::toString() {
    return "Book: " + this->title +
           " Publisher:  " + this->publisher.getName() +
           " Pages: " + std::to_string(this->pages) +
           " Price: " + std::to_string(this->price) +
           " Id: " + std::to_string(this->id) +
           " Authors: " + getAuthorNames() +
           " Published:  " + this->published.toString();
}

int Book::GetIdCounter() {
    return idCounter;
}

Book Book::createDemoBook() {
    PublishingHouse a("demo", "demo", "demo", 14, 14);
    Date d(1, 1, 2000);
    return Book("demo", a, 9, 9, d);
}

void Book::addAuthor(Author *author) {
    this->authors.push_back(author);
}


std::string Book::getAuthorNames() {
    std::string string;
    for (size_t i = 0; i < this->authors.size(); i++) {
        string.append(this->authors[i]->getName());
    }
    return string;
}

void Book::printAllAboutPublishingHouse() {
    std::cout << "Book's " << this->title << " publishing house is: " << std::endl;
    std::cout << "Publishing house's name: " << this->publisher.toString() << std::endl;
}

void Book::replacePublishingHouse(const PublishingHouse &newPublisher) {
    this->publisher = newPublisher;
}

std::vector<Book> Book::getBooksBetween(std::vector<Book> books, const Date &from, const Date &to) {
    std::vector<Book> sortedBooks;
    for (size_t i = 0; i < books.size(); i++) {
        if (books[i].published.isAfter(from) && books[i].published.isBefore(to)) {
            sortedBooks.push_back(books[i]);
        }
    }
    return sortedBooks;
}







