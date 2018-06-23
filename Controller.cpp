//
// Created by Anastasia CHEPURNA on 6/23/18.
//

#include "Controller.h"

Controller::Controller() {
    model = new Model(this);
    viewer = new Viewer(this);
    model->setViewer(viewer);
    viewer->setModel(model);
}

Controller::Controller(Controller const &src) {
    *this = src;
}

Controller &Controller::operator=(Controller const &src) {
    this->viewer = src.viewer;
    this->model = src.model;
    return (*this);
}

Controller::~Controller() {
    delete model;
    delete viewer;
}
