//
// Created by tomic on 30. 03. 2020.
//

#include <string>
#include "TextView.h"
#include <iostream>
#include <algorithm>

TextView::TextView() : View() {}

TextView::TextView(const Position &position1, const Size &size1, const std::string &string) : View(position1, size1),
                                                                                              text(string) {

}


const std::string &TextView::getText() const {
    return text;
}

void TextView::setText(const std::string &text) {
    this->text = text;
}

bool TextView::isCapitalize() const {
    return capitalize;
}

void TextView::setCapitalize(bool capitalize) {
    this->capitalize = capitalize;
}

void TextView::draw() const {
    if (isVisible()) {
        std::string string = this->text;
        if (isCapitalize()) {
            std::transform(string.begin(), string.end(), string.begin(), ::toupper);
            std::cout << std::endl << "TEXTVIEW ->     Text -> " << string << "     " << this->position.toString() << "     "
                      << this->size.toString();
            std::cout << std::endl;
        } else {
            std::transform(string.begin(), string.end(), string.begin(), ::tolower);
            std::cout << std::endl << "TEXTVIEW ->     Text -> " << string << "     " << this->position.toString() << "     "
                      << this->size.toString();
            std::cout << std::endl;
        }
    } else {
        std::cout << std::endl;
        std::cout << "TEXTVIEW IS NOT VISIBLE. " << std::endl;
        std::cout <<  std::endl;
    }
}


