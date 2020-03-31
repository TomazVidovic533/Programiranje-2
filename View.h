//
// Created by tomic on 30. 03. 2020.
//

#ifndef NALOGA0501_VIEW_H
#define NALOGA0501_VIEW_H
#include "Position.h"
#include "Size.h"

class View{
protected:
    Position position;
    Size size;
    bool visible;
public:
    View();

    View(const Position &position, const Size &size);

    const Position &getPosition() const;

    void setPosition(const Position &position);

    const Size &getSize() const;

    void setSize(const Size &size);

    bool isVisible() const;

    void setVisible(bool visible);

    virtual void draw() const;

};


#endif //NALOGA0501_VIEW_H
