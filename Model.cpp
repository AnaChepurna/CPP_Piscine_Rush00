//
// Created by Anastasia CHEPURNA on 6/23/18.
//

#include "Model.h"
#include "Viewer.h"

Model::Model(): controller(NULL), viewer(NULL), character(NULL),
   list(NULL), ptr(list){
}

Model::Model(Controller *controller): controller(controller), viewer(NULL),
   character(new Character(viewer->getWinWidth()/2, viewer->getWinHeight() - 10)),
   list(new OList(character)), ptr(list) {
}

Model::Model(Model const &src) {
*this = src;
}

Model &Model::operator=(Model const &src) {
    this->controller = src.controller;
    this->viewer = src.viewer;
    this->character = src.character;
    this->list = src.list;
    this->ptr = src.ptr;

    return (*this);
}

Model::~Model() {
    delete character;
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

void Model::pushObject(Object *o) {
    OList *curr;
    curr = list;
    while (curr->next != NULL)
        curr = curr->next;
    curr->next = new OList(o);
}

void Model::deleteObject(Object const *c) {
    OList *buf;
    if (list->obj == c) {
        buf = list->next;
        delete list->obj;
        delete list;
        list = buf;
    }
    else {
        OList *curr;
        OList *teil;
        buf = list;
        curr = list->next;
        while (curr != NULL) {
            if (curr->obj == c)
            {
                teil = curr->next;
                delete curr->obj;
                delete curr;
                buf->next = teil;
                return;
            }
            buf = curr;
            curr = curr->next;
        }
    }
}

Character const *Model::getCharacter() {
    return (character);
}


