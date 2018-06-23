//
// Created by Anastasia CHEPURNA on 6/23/18.
//

#include <iostream>
#include "Viewer.h"

Viewer::Viewer(): controller(NULL), model(NULL) {
}

Viewer::Viewer(Controller *controller): controller(controller), model(NULL) {
}

Viewer::Viewer(Viewer const &src) {
*this = src;
}

Viewer &Viewer::operator=(Viewer const &src) {
    this->model = src.model;
    this->controller = src.controller;
    return (*this);
}

Viewer::~Viewer() {
}

void Viewer::setModel(Model *v) {
    this->model = v;
}


