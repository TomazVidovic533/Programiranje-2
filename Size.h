//
// Created by tomic on 30. 03. 2020.
//

#ifndef NALOGA0501_SIZE_H
#define NALOGA0501_SIZE_H
#include <string>
class Size{
private:
    float width,height;
    std::string unit;
public:

    Size(float width, float height, const std::string &unit);

    Size();

    float getWidth() const;

    void setWidth(float width);

    float getHeight() const;

    void setHeight(float height);

    const std::string &getUnit() const;

    void setUnit(const std::string &unit);

    std::string toString() const;

};


#endif //NALOGA0501_SIZE_H
