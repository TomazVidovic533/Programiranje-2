//
// Created by tomic on 30. 03. 2020.
//
#include <vector>
#include <iostream>
#include "Layout.h"

void Layout::addView(View *view) {
    this->vector.push_back(view);
}
View* Layout::getView(const int position) const {
    for(size_t i=0;i<size();i++){
        if(i==position){
            return this->vector.at(position);
        }
    }
}
int Layout::size() const {
    return this->vector.size();
}
void Layout::draw() {
    for(size_t i=0;i<size();i++){
        this->vector[i]->draw();
    }
}