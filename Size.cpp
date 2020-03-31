//
// Created by tomic on 30. 03. 2020.
//

#include <string>
#include "Size.h"

Size::Size(float width, float height, const std::string &unit) : width(width), height(height),
                                                                                      unit(unit) {}

Size::Size() {}

float Size::getWidth() const {
    return width;
}

void Size::setWidth(float width) {
    this->width = width;
}

float Size::getHeight() const {
    return height;
}

void Size::setHeight(float height) {
    this->height = height;
}

const std::string &Size::getUnit() const {
    return unit;
}

void Size::setUnit(const std::string &unit) {
    this->unit = unit;
}

std::string Size::toString() const {

    return "Size -> height: "+std::to_string(this->height)+" width: "+std::to_string(this->width)+" unit: "+this->unit;

}