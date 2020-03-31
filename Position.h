//
// Created by tomic on 30. 03. 2020.
//
#include <string>
#ifndef NALOGA0501_POSITION_H
#define NALOGA0501_POSITION_H

class Position{
private:
    float x;
    float y;
public:

    Position();

    Position(float x, float y);

    float getX() const;

    void setX(float x);

    float getY() const;

    void setY(float y);

    std::string toString() const;

};


#endif //NALOGA0501_POSITION_H
