//
// Created by Anastasia CHEPURNA on 6/23/18.
//

#ifndef RUSH00_MODEL_H
#define RUSH00_MODEL_H

#include <iostream>


#include "Controller.h"
#include "Object.h"
#include "Character.h"

class Model {
private:
    Controller * controller;
    Viewer * viewer;

    Character *character;

    OList * list;
    OList * ptr;

    Model();
public:
    Model(Controller * controller);
    Model(Model const& src);
    Model &operator=(Model const &src);
    ~Model();
    void setViewer(Viewer *v);
    Object const *getNext();
    void pushObject(Object const* o);
    void deleteObject(Object const* c);
    Character const * getCharacter();
};


#endif //RUSH00_MODEL_H
