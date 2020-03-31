//
// Created by tomic on 30. 03. 2020.
//

#ifndef NALOGA0501_LAYOUT_H
#define NALOGA0501_LAYOUT_H

#include <vector>
#include "View.h"

class Layout{
private:
    std::vector<View*> vector;
public:

    void addView(View* view);

    View* getView(const int position) const;

    int size() const;

    virtual void draw();

};

#endif //NALOGA0501_LAYOUT_H
