#include <iostream>
#include "Publication.h"
#include "Book.h"
#include "Newsletter.h"
#include "Date.h"
#include "PublishingHouse.h"
#include "Author.h"
#include <vector>

int main() {

    std::vector<Publication*> library;
    library.push_back(new Book("title",PublishingHouse("hisa1","naslov 1","regija 1",3869878544,2145844),14.99,147,Date(17,12,2019)));
    library.back()->print();
    library.push_back(new Newsletter("title 2",PublishingHouse("hisa2","naslov 2","regija 2",3862223447,787878741),625,32.99,Date(7,5,2018),"main topic 1"));
    std::cout<<std::endl;
    library.back()->print();

    return 0;
}
