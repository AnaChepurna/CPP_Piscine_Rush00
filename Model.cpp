//
// Created by Anastasia CHEPURNA on 6/23/18.
//

#include "Model.h"

Model::Model(): controller(NULL), viewer(NULL) {
}

Model::Model(Controller *controller): controller(controller), viewer(NULL) {
}

Model::Model(Model const &src) {
*this = src;
}

Model &Model::operator=(Model const &src) {
    this->controller = src.controller;
    this->viewer = src.viewer;
    return (*this);
}

Model::~Model() {

}

void Model::setViewer(Viewer *v) {
    this->viewer = v;
}


