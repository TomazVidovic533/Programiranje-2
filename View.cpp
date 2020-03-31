//
// Created by tomic on 30. 03. 2020.
//

#include <iostream>
#include "View.h"

View::View() {}

View::View(const Position &position, const Size &size) : position(position), size(size) {
    this->visible=true;
}

const Position &View::getPosition() const {
    return position;
}

void View::setPosition(const Position &position) {
    this->position = position;
}

const Size &View::getSize() const {
    return size;
}

void View::setSize(const Size &size) {
    this->size = size;
}

bool View::isVisible() const {
    return visible;
}

void View::setVisible(bool visible) {
    this->visible = visible;
}

void View::draw() const {
    if (isVisible()) {
        std::cout<<std::endl<<"VIEW ->      "<<this->size.toString()<<"     "<<this->position.toString()<<std::endl;
    }else{
        std::cout <<  std::endl;
        std::cout<<"VIEW IS NOT VISIBLE.";
        std::cout <<  std::endl;
    }
}