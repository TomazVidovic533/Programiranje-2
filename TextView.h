//
// Created by tomic on 30. 03. 2020.
//

#ifndef NALOGA0501_TEXTVIEW_H
#define NALOGA0501_TEXTVIEW_H

#include "View.h"

class TextView : public View {
private:
    std::string text;
    bool capitalize;
public:
    TextView();

    TextView(const Position &position1, const Size &size1, const std::string &string);

    const std::string &getText() const;

    void setText(const std::string &text);

    bool isCapitalize() const;

    void setCapitalize(const bool capitalize);

    void draw() const override ;

};


#endif //NALOGA0501_TEXTVIEW_H
