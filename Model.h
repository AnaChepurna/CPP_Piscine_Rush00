//
// Created by Anastasia CHEPURNA on 6/23/18.
//

#ifndef RUSH00_MODEL_H
#define RUSH00_MODEL_H

#include <iostream>


#include "Controller.h"
#include "Object.h"
#include "Character.h"
#include "EnemyEvent.hpp"

class Model {
private:
    Controller * controller;
    Viewer * viewer;

    Character *character;

    OList * list;
    OList * ptr;

    EnemyEvent * enemyEvent;
    Model();
public:
    Model(Controller * controller, Viewer *viewer);
    Model(Model const& src);
    Model &operator=(Model const &src);
    ~Model();
    void setViewer(Viewer *v);
    Object *getNext();
    void pushObject(Object * o);
    void deleteObject(Object const* c);
    Character * getCharacter();
    EnemyEvent * getEnemyEvent();
};


#endif //RUSH00_MODEL_H
