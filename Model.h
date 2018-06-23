//
// Created by Anastasia CHEPURNA on 6/23/18.
//

#ifndef RUSH00_MODEL_H
#define RUSH00_MODEL_H

#include <ncurses.h>
#include <iostream>


#include "Controller.h"

class Model {
private:
    Controller * controller;
    Viewer * viewer;

    Model();

public:
    Model(Controller * controller);
    Model(Model const& src);
    Model &operator=(Model const &src);
    ~Model();
    void setViewer(Viewer *v);
};


#endif //RUSH00_MODEL_H
