//
// Created by tomic on 30. 03. 2020.
//

#include "Position.h"

Position::Position() {}

Position::Position(float x, float y) : x(x), y(y) {}

float Position::getX() const {
    return x;
}

void Position::setX(float x) {
    this->x = x;
}

float Position::getY() const {
    return y;
}

void Position::setY(float y) {
    this->y = y;
}

std::string Position::toString() const {

    return "Position -> x:"+std::to_string(this->x)+" y: "+std::to_string(this->y);

}
