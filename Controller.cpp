//
// Created by Anastasia CHEPURNA on 6/23/18.
//

#include "Controller.h"
#include "Model.h"
#include "Viewer.h"

Controller::Controller() {
    viewer = new Viewer(this);
    model = new Model(this, viewer);
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

void Controller::startGame() {
  //  printf("start\n");
    viewer->showPreviw();
    viewer->showObjects();
}
