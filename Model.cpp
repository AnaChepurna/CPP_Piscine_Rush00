//
// Created by Anastasia CHEPURNA on 6/23/18.
//

#include "Model.h"

Model::Model(): controller(NULL), viewer(NULL), list(NULL), ptr(list) {
}

Model::Model(Controller *controller): controller(controller), viewer(NULL),
   list(NULL), ptr(list) {
}

Model::Model(Model const &src) {
*this = src;
}

Model &Model::operator=(Model const &src) {
    this->controller = src.controller;
    this->viewer = src.viewer;
    this->list = src.list;
    this->ptr = src.ptr;
    return (*this);
}

Model::~Model() {

}

void Model::setViewer(Viewer *v) {
    this->viewer = v;
}

Object const *Model::getNext() {
    Object * ret;
    if (ptr == NULL) {
        ret = NULL;
        ptr = list;
    }
    else {
        ret = ptr->obj;
        ptr = ptr->next;
    }
    return (ret);
}


