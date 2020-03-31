//
// Created by tomic on 31. 03. 2020.
//

#ifndef NALOGA0502_BOOK_H
#define NALOGA0502_BOOK_H


#include <string>
#include "Author.h"
#include "Publication.h"
#include "PublishingHouse.h"
#include "Date.h"
#include <vector>
class Book : public Publication {
private:
    static int idCounter;
    int id;
    std::vector<Author*> authors;
public:
    Book();

    Book(const std::string &title, const PublishingHouse &publisher, double price, int pages, const Date published);

    Book(const std::string &title, const PublishingHouse &publisher, double price, int pages,
         Author * authors,const Date published);

    Book(const Book &b);
    void setId(int id);
    int getId() const;

    const std::string &getTitle() const;
    const PublishingHouse & getPublisher() const;
    void addAuthor( Author* author);
    std::string getAuthorNames();
    void print() const;
    std::string toString();
    virtual ~Book();
    static int GetIdCounter();
    static Book createDemoBook();
    Book(Book *pBook);
    void setPublisher(const PublishingHouse &publisher);
    void printAllAboutPublishingHouse();
    void replacePublishingHouse(const PublishingHouse &newPublisher);
    std::vector<Book> getBooksBetween(std::vector<Book> books, const Date &from, const Date &to);
};


#endif //NALOGA0502_BOOK_H
